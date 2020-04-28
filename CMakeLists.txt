cmake_minimum_required (VERSION 3.1)
project ("ublox")

option (OPT_BUILD_TEST "Build and install test applications." OFF)
option (OPT_BUILD_PLUGIN "Build and install CommsChampion plugin." OFF)
option (OPT_NO_COMMS "Forcefully exclude checkout and install of COMMS library. \
    Works only if OPT_BUILD_TEST and OPT_BUILD_PLUGIN options weren't used" OFF)
option (OPT_WARN_AS_ERR "Treat warning as error" ON)
option (OPT_USE_CCACHE "Use of ccache on UNIX system" ON)

# Other parameters:
# OPT_CMAKE_EXPORT_NAMESPACE - Set namespace for a protocol library
#     exported via generated *Config.cmake file. Defaults to "cc".
# OPT_CC_TAG - Override default tag of comms_champion project.
# OPT_QT_DIR - Path to custom Qt5 install directory.
# OPT_CC_MAIN_INSTALL_DIR - Path to CommsChampion external install directory
#       (if such already built).
# OPT_TEST_OPTIONS - Class name of the options for test applications,
#       defaults to ublox::options::DefaultOptions.
# OPT_TEST_INTERFACE - Class name of the interface for test applications,
#       defaults to ublox::Message.
# OPT_TEST_FRAME - Class name of the frame for test applications,
#       defaults to ublox::frame::UbloxFrame.
# OPT_TEST_INPUT_MESSAGES - All input messages bundle for test applications,
#       defaults to ublox::input::AllMessages.
# OPT_EXTERNALS_DIR - Directory where externals (comms_champion) are checked out,
#       defaults to ${PROJECT_BINARY_DIR}/externals.

if ("${OPT_CC_TAG}" STREQUAL "")
    set (OPT_CC_TAG "v2.4")
endif()

if (NOT CMAKE_CXX_STANDARD)
    set (CMAKE_CXX_STANDARD 11)
endif()

if ("${OPT_EXTERNALS_DIR}" STREQUAL "")
    set (OPT_EXTERNALS_DIR "${PROJECT_BINARY_DIR}/externals")
endif()

include(GNUInstallDirs)
set (LIB_INSTALL_DIR ${CMAKE_INSTALL_LIBDIR})
set (BIN_INSTALL_DIR ${CMAKE_INSTALL_BINDIR})
set (INC_INSTALL_DIR ${CMAKE_INSTALL_INCLUDEDIR})
set (CONFIG_INSTALL_DIR ${CMAKE_INSTALL_DATADIR}/CommsChampion)
set (PLUGIN_INSTALL_DIR ${CMAKE_INSTALL_LIBDIR}/CommsChampion/plugin)
set (DOC_INSTALL_DIR ${CMAKE_INSTALL_DOCDIR})

######################################################################

if (OPT_BUILD_PLUGIN)
    if (NOT "${OPT_QT_DIR}" STREQUAL "")
        list (APPEND CMAKE_PREFIX_PATH ${OPT_QT_DIR})
    endif ()

    find_package(Qt5Core)
    find_package(Qt5Widgets)
endif ()

######################################################################

# Set compiler flags
if ((CMAKE_COMPILER_IS_GNUCC) OR ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang"))
    set (extra_flags_list
        "-Wall" "-Wextra" "-Wcast-align" "-Wcast-qual" "-Wctor-dtor-privacy"
        "-Wmissing-include-dirs"
        "-Woverloaded-virtual" "-Wredundant-decls" "-Wshadow" "-Wundef" "-Wunused"
        "-Wno-unknown-pragmas" "-fdiagnostics-show-option"
    )

    if (CMAKE_COMPILER_IS_GNUCC)
        list (APPEND extra_flags_list
            "-Wnoexcept" "-Wlogical-op" "-Wstrict-null-sentinel" "-ftemplate-backtrace-limit=0"
        )
    endif ()

    if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
        list (APPEND extra_flags_list
        "-Wno-dangling-field" "-Wno-unused-command-line-argument"
        "-ftemplate-depth=1024")
    endif ()

    if (OPT_WARN_AS_ERR)
        list (APPEND extra_flags_list "-Werror")
    endif ()

    string(REPLACE ";" " " extra_flags "${extra_flags_list}")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${extra_flags}")
elseif (MSVC)
    add_definitions("/bigobj" "-D_CRT_SECURE_NO_WARNINGS")
    if (OPT_WARN_AS_ERR)
        add_definitions("/WX")
    endif ()
endif ()

if ((UNIX) AND (OPT_USE_CCACHE))
    find_program(CCACHE_FOUND ccache)
    if(CCACHE_FOUND)
        set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
        set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK ccache)
    endif()
endif ()

######################################################################

# Use external CommsChampion project or compile it in place
set (CC_EXTERNAL_TGT "comms_champion_external")
if (OPT_BUILD_TEST OR OPT_BUILD_PLUGIN)
    set (external_cc_needed TRUE)
endif ()

if ((external_cc_needed OR (NOT OPT_NO_COMMS)) AND ("${OPT_CC_MAIN_INSTALL_DIR}" STREQUAL ""))
    set (cc_repo "https://github.com/arobenko/comms_champion.git")
    set (cc_tag "${OPT_CC_TAG}")
    set (cc_main_dir "${PROJECT_BINARY_DIR}/externals/comms_champion-build")
    set (cc_src_dir "${OPT_EXTERNALS_DIR}/comms_champion")
    set (cc_bin_dir "${cc_main_dir}/build")
    set (cc_install_dir "${CMAKE_INSTALL_PREFIX}")

    if (NOT "${OPT_QT_DIR}" STREQUAL "")
        set (cc_qt_dir_opt -DCC_QT_DIR=${OPT_QT_DIR})
        set (EXT_QT_DIR ${OPT_QT_DIR})
    endif ()

    if (NOT ${OPT_BUILD_PLUGIN})
        set (ct_lib_only_opt -DCC_COMMS_LIB_ONLY=ON)
        set (EXT_CC_NO_COMMS_CHAMPION TRUE)
    endif ()

    find_package (Git REQUIRED)
    set (ext_targets_inc_file "${cc_src_dir}/cmake/DefineExternalProjectTargets.cmake")
    if (NOT EXISTS "${ext_targets_inc_file}")
        execute_process (
            COMMAND ${CMAKE_COMMAND} -E remove_directory "${cc_src_dir}"
        )

        execute_process (
            COMMAND 
                ${GIT_EXECUTABLE} clone -b ${cc_tag} --depth 1 ${cc_repo} ${cc_src_dir}
            RESULT_VARIABLE git_result
        )

        if (NOT "${git_result}" STREQUAL "0")
            message (FATAL_ERROR "git clone/checkout failed")
        endif ()

        if (NOT EXISTS "${ext_targets_inc_file}")
             message (FATAL_ERROR "Incompatible version of ${cc_repo}, please use different tag.")
        endif ()

    endif ()

    set (EXT_CC_INSTALL_DIR ${cc_install_dir})
    include (${ext_targets_inc_file})

    include(ExternalProject)
    ExternalProject_Add(
        "${CC_EXTERNAL_TGT}"
        PREFIX "${cc_main_dir}"
        STAMP_DIR "${cc_bin_dir}"
        GIT_REPOSITORY ${cc_repo}
        GIT_TAG ${cc_tag}
        SOURCE_DIR "${cc_src_dir}"
        BINARY_DIR "${cc_bin_dir}"
        INSTALL_DIR "${cc_install_dir}"
        CMAKE_ARGS
            -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE} -DCMAKE_INSTALL_PREFIX=${cc_install_dir}
            -DCC_NO_UNIT_TESTS=ON -DCC_NO_WARN_AS_ERR=ON -DCMAKE_CXX_STANDARD=${CMAKE_CXX_STANDARD}
            -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER} -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
            ${cc_qt_dir_opt} ${ct_lib_only_opt}
    )

    if (WIN32 AND (NOT "${OPT_QT_DIR}" STREQUAL ""))
        message (STATUS "Qt5 deployment is available by building \"deploy_qt\" target")
        add_custom_target ("deploy_qt"
            COMMAND ${CMAKE_COMMAND} --build ${cc_bin_dir} --target deploy_qt
            WORKING_DIRECTORY ${cc_bin_dir}
        )

        add_dependencies("deploy_qt" ${CC_EXTERNAL_TGT})
    endif ()
elseif (external_cc_needed)
    list (APPEND CMAKE_PREFIX_PATH "${OPT_CC_MAIN_INSTALL_DIR}")
    find_package(CommsChampion NO_MODULE)
endif ()

######################################################################

# Define documentation target
find_package (Doxygen)
if (DOXYGEN_FOUND)
    set (doc_output_dir "${CMAKE_INSTALL_PREFIX}/${DOC_INSTALL_DIR}")
    set (match_str "OUTPUT_DIRECTORY[^\n]*")
    set (replacement_str "OUTPUT_DIRECTORY = ${doc_output_dir}")
    set (config_file "${CMAKE_CURRENT_SOURCE_DIR}/doc/doxygen.conf")
    set (OPT_DOXYGEN_CONFIG_FILE "${CMAKE_CURRENT_BINARY_DIR}/doxygen.conf")

    file (READ ${config_file} config_text)
    string (REGEX REPLACE "${match_str}" "${replacement_str}" modified_config_text "${config_text}")
    file (WRITE "${OPT_DOXYGEN_CONFIG_FILE}" "${modified_config_text}")
    set (doc_tgt "doc_ublox")
    add_custom_target ("${doc_tgt}"
        COMMAND ${CMAKE_COMMAND} -E make_directory ${doc_output_dir}
        COMMAND ${DOXYGEN_EXECUTABLE} ${OPT_DOXYGEN_CONFIG_FILE}
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
endif ()

######################################################################

# Define protocol library
add_library(ublox INTERFACE)

target_include_directories(ublox INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

if (external_cc_needed AND (NOT TARGET ${CC_EXTERNAL_TGT}))
    if (NOT TARGET cc::comms)
        message (FATAL_ERROR "COMMS library is not found")
    endif()

    target_link_libraries(ublox INTERFACE cc::comms)
endif ()

if ("${OPT_CMAKE_EXPORT_NAMESPACE}" STREQUAL "")
    set (OPT_CMAKE_EXPORT_NAMESPACE "cc")
endif ()

install(TARGETS ublox EXPORT ubloxConfig)
install(EXPORT ubloxConfig
    DESTINATION ${LIB_INSTALL_DIR}/ublox/cmake
    NAMESPACE ${OPT_CMAKE_EXPORT_NAMESPACE}::
)

install (
    DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/ublox
    DESTINATION ${INC_INSTALL_DIR}
)

file (READ "${PROJECT_SOURCE_DIR}/include/ublox/Version.h" version_file)
string (REGEX MATCH "UBLOX_MAJOR_VERSION[^0-9]*([0-9]*)U*" _ ${version_file})
set (major_ver ${CMAKE_MATCH_1})
string (REGEX MATCH "UBLOX_MINOR_VERSION[^0-9]*([0-9]*)U*" _ ${version_file})
set (minor_ver ${CMAKE_MATCH_1})
string (REGEX MATCH "UBLOX_PATCH_VERSION[^0-9]*([0-9]*)U*" _ ${version_file})
set (patch_ver ${CMAKE_MATCH_1})
if ((NOT "${major_ver}" STREQUAL "") AND
    (NOT "${minor_ver}" STREQUAL "") AND
    (NOT "${patch_ver}" STREQUAL ""))
    set (UBLOX_VERSION "${major_ver}.${minor_ver}.${patch_ver}")

    message (STATUS "Detected version ${UBLOX_VERSION} of the protocol")
    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
        ${CMAKE_BINARY_DIR}/ubloxConfigVersion.cmake
        VERSION ${UBLOX_VERSION}
        COMPATIBILITY AnyNewerVersion)

    install (
        FILES ${CMAKE_BINARY_DIR}/ubloxConfigVersion.cmake
        DESTINATION ${LIB_INSTALL_DIR}/ublox/cmake/)
endif ()

######################################################################

if (OPT_BUILD_TEST)
    add_subdirectory(test)
endif ()

######################################################################

if (OPT_BUILD_PLUGIN)
    add_subdirectory(cc_plugin)
endif ()
