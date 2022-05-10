cmake_minimum_required (VERSION 3.1)
project ("ublox")

option (OPT_REQUIRE_COMMS_LIB "Require COMMS library, find it and set as dependency to the protocol library" ON)

# Other parameters:
# OPT_CMAKE_EXPORT_NAMESPACE - Set namespace for a protocol library
#     exported via generated *Config.cmake file. Defaults to "cc".
# OPT_CMAKE_EXPORT_CONFIG_NAME - Override default name "ublox" of the cmake generated config file export
#     (ubloxConfig) with provided new name.

if (CMAKE_TOOLCHAIN_FILE AND EXISTS ${CMAKE_TOOLCHAIN_FILE})
    message(STATUS "Loading toolchain from ${CMAKE_TOOLCHAIN_FILE}")
endif()

include(GNUInstallDirs)

######################################################################
# Define documentation target
find_package (Doxygen)
if (DOXYGEN_FOUND)
    set (doc_output_dir "${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_DOCDIR}")
    set (match_str "OUTPUT_DIRECTORY[^\n]*")
    set (replacement_str "OUTPUT_DIRECTORY = ${doc_output_dir}")
    set (config_file "${CMAKE_CURRENT_SOURCE_DIR}/doc/doxygen.conf")
    set (updated_config_file "${CMAKE_CURRENT_BINARY_DIR}/doxygen.conf")

    file (READ ${config_file} config_text)
    string (REGEX REPLACE "${match_str}" "${replacement_str}" modified_config_text "${config_text}")

    if ("${PROJECT_BINARY_DIR}" MATCHES "^${PROJECT_SOURCE_DIR}")
        get_filename_component(build_name ${PROJECT_BINARY_DIR} NAME)
        string(APPEND modified_config_text "EXCLUDE_PATTERNS       =  */${build_name}/*\n")
    endif ()

    file (WRITE "${updated_config_file}" "${modified_config_text}")
    set (doc_tgt "doc_ublox")
    add_custom_target ("${doc_tgt}"
        COMMAND ${CMAKE_COMMAND} -E make_directory ${doc_output_dir}
        COMMAND ${DOXYGEN_EXECUTABLE} ${updated_config_file}
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
endif ()

######################################################################

# Define protocol library
add_library(ublox INTERFACE)

target_include_directories(ublox INTERFACE
    $<INSTALL_INTERFACE:include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

if (OPT_REQUIRE_COMMS_LIB)
    find_package(LibComms REQUIRED)
    target_link_libraries(ublox INTERFACE cc::comms)
endif ()

if ("${OPT_CMAKE_EXPORT_NAMESPACE}" STREQUAL "")
    set (OPT_CMAKE_EXPORT_NAMESPACE "cc")
endif ()

if ("${OPT_CMAKE_EXPORT_CONFIG_NAME}" STREQUAL "")
    set (OPT_CMAKE_EXPORT_CONFIG_NAME "ublox")
endif ()

install(TARGETS ublox EXPORT ${OPT_CMAKE_EXPORT_CONFIG_NAME}Config)
install(EXPORT ${OPT_CMAKE_EXPORT_CONFIG_NAME}Config
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/${OPT_CMAKE_EXPORT_CONFIG_NAME}/cmake
    NAMESPACE ${OPT_CMAKE_EXPORT_NAMESPACE}::
)

install (
    DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/ublox
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
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
        ${CMAKE_BINARY_DIR}/${OPT_CMAKE_EXPORT_CONFIG_NAME}ConfigVersion.cmake
        VERSION ${UBLOX_VERSION}
        COMPATIBILITY AnyNewerVersion)

    install (
        FILES ${CMAKE_BINARY_DIR}/${OPT_CMAKE_EXPORT_CONFIG_NAME}ConfigVersion.cmake
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/${OPT_CMAKE_EXPORT_CONFIG_NAME}/cmake/)
endif ()
