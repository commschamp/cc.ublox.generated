cmake_minimum_required (VERSION 3.1)
project ("ublox")

option (OPT_BUILD_TEST "Build and install test applications." OFF)
option (OPT_BUILD_PLUGIN "Build and install CommsChampion plugin." OFF)
option (OPT_NO_COMMS "Forcefully exclude checkout and install of COMMS library. \
    Works only if OPT_BUILD_TEST and OPT_BUILD_PLUGIN options weren't used" OFF)
option (OPT_WARN_AS_ERR "Treat warning as error" ON)
option (OPT_USE_CCACHE "Use of ccache on UNIX system" ON)
option (OPT_EXTERNALS_UPDATE_DISCONNECTED "Allow skip of external projects update." OFF)

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
# OPT_MSVC_FORCE_WARN_LEVEL - Force msvc warning level

if (CMAKE_TOOLCHAIN_FILE AND EXISTS ${CMAKE_TOOLCHAIN_FILE})
    message(STATUS "Loading toolchain from ${CMAKE_TOOLCHAIN_FILE}")
endif()

if ("${OPT_CC_TAG}" STREQUAL "")
    set (OPT_CC_TAG "v3.1.2")
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

# Use external CommsChampion project or compile it in place
set (CC_EXTERNAL_TGT "comms_champion_external")
if (OPT_BUILD_TEST OR OPT_BUILD_PLUGIN)
    set (external_cc_needed TRUE)
endif ()

if ((external_cc_needed OR (NOT OPT_NO_COMMS)) AND ("${OPT_CC_MAIN_INSTALL_DIR}" STREQUAL ""))
    include (${PROJECT_SOURCE_DIR}/cmake/CC_Prefetch.cmake)
    cc_prefetch(SRC_DIR "${OPT_EXTERNALS_DIR}/comms_champion" TAG "${OPT_CC_TAG}")
    include(${OPT_EXTERNALS_DIR}/comms_champion/cmake/CC_External.cmake)

    set (qt_dir_opt)
    if (NOT "${OPT_QT_DIR}" STREQUAL "")
        set (qt_dir_opt QT_DIR "${OPT_QT_DIR}")
    endif ()

    set (no_tools_opt)
    if (NOT ${OPT_BUILD_PLUGIN})
        set (no_tools_opt NO_TOOLS)
    endif ()

    set (cc_update_disconnected_opt)
    if (${OPT_EXTERNALS_UPDATE_DISCONNECTED})
        set (cc_update_disconnected_opt "UPDATE_DISCONNECTED")
    endif ()

    cc_build_as_external_project(
        SRC_DIR ${OPT_EXTERNALS_DIR}/comms_champion
        BUILD_DIR ${PROJECT_BINARY_DIR}/comms_champion
        INSTALL_DIR "${CMAKE_INSTALL_PREFIX}"
        TAG ${OPT_CC_TAG}
        TGT ${CC_EXTERNAL_TGT}
        ${qt_dir_opt} ${no_tools_opt} ${cc_update_disconnected_opt}
        CMAKE_ARGS
            -DCC_NO_UNIT_TESTS=ON -DCC_NO_WARN_AS_ERR=ON
    )
    set (cc_compile_file "${OPT_EXTERNALS_DIR}/comms_champion/cmake/CC_Compile.cmake")
elseif (external_cc_needed)
    list (APPEND CMAKE_PREFIX_PATH "${OPT_CC_MAIN_INSTALL_DIR}")
    find_package(CommsChampion NO_MODULE)
    set (cc_compile_file "${OPT_CC_MAIN_INSTALL_DIR}/lib/LibComms/cmake/CC_Compile.cmake")
endif ()

if (EXISTS ${cc_compile_file})
    # Set compiler flags
    set (warn_as_err_opt)
    if (OPT_WARN_AS_ERR)
        set (warn_as_err_opt "WARN_AS_ERR")
    endif ()

    set (ccache_opt)
    if (OPT_USE_CCACHE)
        set (ccache_opt "USE_CCACHE")
    endif ()

    include(${cc_compile_file})
    cc_compile(${warn_as_err_opt} ${ccache_opt})
    if (NOT "${OPT_MSVC_FORCE_WARN_LEVEL}" STREQUAL "")
        cc_msvc_force_warn_opt("/${OPT_MSVC_FORCE_WARN_LEVEL}")
    endif()
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
    $<INSTALL_INTERFACE:include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
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
