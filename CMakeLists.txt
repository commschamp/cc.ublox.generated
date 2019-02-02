cmake_minimum_required (VERSION 3.1)
project ("ublox")

option (OPT_LIB_ONLY "Install only protocol library, no other libraries/plugings are built/installed." OFF)
option (OPT_THIS_AND_COMMS_LIBS_ONLY "Install this protocol and COMMS libraries only, no other applications/plugings are built/installed." OFF)
option (OPT_FULL_SOLUTION "Build and install full solution, including CommsChampion." ON)
option (OPT_NO_WARN_AS_ERR "Do NOT treat warning as error" OFF)
option (OPT_NO_CCACHE "Disable use of ccache on UNIX system" OFF)

# Other parameters:
# OPT_QT_DIR - Path to custom Qt5 install directory.
# OPT_CC_MAIN_INSTALL_DIR - Path to CommsChampion install directory (if such already built).

if (NOT CMAKE_CXX_STANDARD)
    set (CMAKE_CXX_STANDARD 11)
endif()

set (INSTALL_DIR ${CMAKE_INSTALL_PREFIX})

include(GNUInstallDirs)
set (LIB_INSTALL_DIR ${INSTALL_DIR}/${CMAKE_INSTALL_LIBDIR})
set (BIN_INSTALL_DIR ${INSTALL_DIR}/${CMAKE_INSTALL_BINDIR})
set (INC_INSTALL_DIR ${INSTALL_DIR}/${CMAKE_INSTALL_INCLUDEDIR})
set (CONFIG_INSTALL_DIR ${INSTALL_DIR}/etc/CommsChampion)
set (PLUGIN_INSTALL_DIR ${INSTALL_DIR}/${CMAKE_INSTALL_LIBDIR}/CommsChampion/plugin)
set (DOC_INSTALL_DIR ${INSTALL_DIR}/${CMAKE_INSTALL_DOCDIR})

find_package (Doxygen)
if (DOXYGEN_FOUND)
    set (doc_output_dir "${DOC_INSTALL_DIR}")
    make_directory (${doc_output_dir})

    set (match_str "OUTPUT_DIRECTORY[^\n]*")
    set (replacement_str "OUTPUT_DIRECTORY = ${doc_output_dir}")
    set (config_file "${CMAKE_CURRENT_SOURCE_DIR}/doc/doxygen.conf")
    set (OPT_DOXYGEN_CONFIG_FILE "${CMAKE_CURRENT_BINARY_DIR}/doxygen.conf")

    file (READ ${config_file} config_text)
    string (REGEX REPLACE "${match_str}" "${replacement_str}" modified_config_text "${config_text}")
    file (WRITE "${OPT_DOXYGEN_CONFIG_FILE}" "${modified_config_text}")
    set (doc_tgt "doc_ublox")
    add_custom_target ("${doc_tgt}"
        COMMAND ${DOXYGEN_EXECUTABLE} ${OPT_DOXYGEN_CONFIG_FILE}
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR})
endif ()

######################################################################

function (define_lib)
    add_library(ublox INTERFACE)

    target_include_directories(ublox INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
    )

    if (TARGET cc::comms AND (NOT OPT_FULL_SOLUTION))
        target_link_libraries(ublox INTERFACE cc::comms)
    endif()

    install(TARGETS ublox EXPORT ubloxConfig)
    install(EXPORT ubloxConfig
        DESTINATION ${LIB_INSTALL_DIR}/ublox/cmake
    )
    install (
        DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/ublox
        DESTINATION ${INC_INSTALL_DIR}
    )
endfunction ()

######################################################################

if (OPT_LIB_ONLY)
    define_lib()
    return ()
endif ()

######################################################################

if (NOT "${OPT_QT_DIR}" STREQUAL "")
    list (APPEND CMAKE_PREFIX_PATH ${OPT_QT_DIR})
endif ()

set (CC_EXTERNAL_TGT "comms_champion_external")
include(ExternalProject)
macro (externals install_dir build_cc deploy_tgt)
    set (cc_tag "v1.0")
    set (cc_main_dir "${CMAKE_BINARY_DIR}/comms_champion")
    set (cc_src_dir "${cc_main_dir}/src")
    set (cc_bin_dir "${cc_main_dir}/build")

    if (NOT "${OPT_QT_DIR}" STREQUAL "")
        set (cc_qt_dir_opt -DCC_QT_DIR=${OPT_QT_DIR})
    endif ()

    if (NOT ${build_cc})
        set (ct_lib_only_opt -DCC_COMMS_LIB_ONLY=ON)
    endif ()

    find_package (Git REQUIRED)
    if (EXISTS "${cc_src_dir}/.git")
        execute_process (
            COMMAND ${GIT_EXECUTABLE} fetch --depth 1
            WORKING_DIRECTORY ${cc_src_dir}
        )

        execute_process (
            COMMAND ${GIT_EXECUTABLE} checkout ${cc_tag}
            WORKING_DIRECTORY ${cc_src_dir}
        )
    else ()
        execute_process (
            COMMAND ${CMAKE_COMMAND} -E remove_directory "${cc_src_dir}"
        )

        execute_process (
            COMMAND 
                ${GIT_EXECUTABLE} clone -b ${cc_tag} --depth 1 https://github.com/arobenko/comms_champion.git
                    ${cc_src_dir}
            RESULT_VARIABLE git_result
        )

        if (NOT "${git_result}" STREQUAL "0")
            message (WARNING "git clone/checkout failed")
        endif ()
    endif ()

    set (EXT_CC_INSTALL_DIR ${install_dir})
    include (${cc_src_dir}/cmake/DefineExternalProjectTargets.cmake)

    ExternalProject_Add(
        "${CC_EXTERNAL_TGT}"
        PREFIX "${cc_main_dir}"
        SOURCE_DIR "${cc_src_dir}"
        BINARY_DIR "${cc_bin_dir}"
        INSTALL_DIR "${install_dir}"
        CMAKE_ARGS
            -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE} -DCMAKE_INSTALL_PREFIX=${install_dir}
            -DCC_NO_UNIT_TESTS=ON -DCC_NO_WARN_AS_ERR=ON -DCMAKE_CXX_STANDARD=${CMAKE_CXX_STANDARD}
            -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER} -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
            ${cc_qt_dir_opt} ${ct_lib_only_opt}
    )

    if (${deploy_tgt} AND WIN32 AND (NOT "${OPT_QT_DIR}" STREQUAL ""))
        message (STATUS "Qt5 deployment is available by building \"deploy_qt\" target")
        add_custom_target ("deploy_qt"
            COMMAND ${CMAKE_COMMAND} --build ${cc_bin_dir} --target deploy_qt
            WORKING_DIRECTORY ${cc_bin_dir}
        )

        add_dependencies("deploy_qt" ${CC_EXTERNAL_TGT})
    endif ()
endmacro()

######################################################################

if (OPT_THIS_AND_COMMS_LIBS_ONLY)
    externals(${INSTALL_DIR} FALSE FALSE)
    define_lib ()
    return()
endif ()

while (TRUE)
    if (OPT_FULL_SOLUTION)
        externals(${INSTALL_DIR} TRUE TRUE)
        break()
    endif ()

    list (APPEND CMAKE_PREFIX_PATH "${INSTALL_DIR}")
    if (NOT "${OPT_CC_MAIN_INSTALL_DIR}" STREQUAL "")
        list (APPEND CMAKE_PREFIX_PATH "${OPT_CC_MAIN_INSTALL_DIR}")
    endif ()

    find_package(CommsChampion QUIET NO_MODULE)

    if (NOT CC_COMMS_FOUND)
        set (externals_install "${CMAKE_BINARY_DIR}/ext_install")
        externals(${externals_install} TRUE FALSE)
        break()
    endif ()

    find_package(CommsChampion NO_MODULE)
    break()
endwhile()

define_lib ()

find_package(Qt5Core)
find_package(Qt5Widgets)

if ((CMAKE_COMPILER_IS_GNUCC) OR ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang"))
    set (extra_flags_list
        "-Wall" "-Wextra" "-Wcast-align" "-Wcast-qual" "-Wctor-dtor-privacy"
        "-Wmissing-include-dirs"
        "-Woverloaded-virtual" "-Wredundant-decls" "-Wshadow" "-Wundef" "-Wunused"
        "-Wno-unknown-pragmas" "-fdiagnostics-show-option"
    )

    if (CMAKE_COMPILER_IS_GNUCC)
        list (APPEND extra_flags_list
            "-Wnoexcept" "-Wlogical-op" "-Wstrict-null-sentinel"
        )
    endif ()

    if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
        list (APPEND extra_flags_list
           "-Wno-dangling-field" "-Wno-unused-command-line-argument"
           "-ftemplate-depth=1024")
    endif ()

    if (NOT OPT_NO_WARN_AS_ERR)
        list (APPEND extra_flags_list "-Werror")
    endif ()

    string(REPLACE ";" " " extra_flags "${extra_flags_list}")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${extra_flags}")
elseif (MSVC)
    add_definitions("/bigobj")
    if (NOT CC_NO_WARN_AS_ERR)
        add_definitions("/WX")
    endif ()
endif ()

if ((UNIX) AND (NOT OPT_NO_CCACHE))
    find_program(CCACHE_FOUND ccache)
    if(CCACHE_FOUND)
        set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
        set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK ccache)
    endif()
endif ()

add_subdirectory(cc_plugin)

