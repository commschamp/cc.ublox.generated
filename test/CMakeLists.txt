######################################################################
function (define_test name)
    set (src ${name}.cpp)
    add_executable(${name} ${src})
    target_link_libraries(${name} PRIVATE ublox cc::comms)

    set (extra_defs)
    if (NOT "${OPT_TEST_INTERFACE}" STREQUAL "")
        list (APPEND extra_defs -DINTERFACE=${OPT_TEST_INTERFACE})
    endif ()

    if (NOT "${OPT_TEST_INTERFACE_HEADER}" STREQUAL "")
        list (APPEND extra_defs -DINTERFACE_HEADER=${OPT_TEST_INTERFACE_HEADER})
    endif ()

    if (NOT "${OPT_TEST_FRAME}" STREQUAL "")
        list (APPEND extra_defs -DFRAME=${OPT_TEST_FRAME})
    endif ()

    if (NOT "${OPT_TEST_FRAME_HEADER}" STREQUAL "")
        list (APPEND extra_defs -DFRAME_HEADER=${OPT_TEST_FRAME_HEADER})
    endif ()

    if (NOT "${OPT_TEST_OPTIONS}" STREQUAL "")
        list (APPEND extra_defs -DOPTIONS=${OPT_TEST_OPTIONS})
    endif ()

    if (NOT "${OPT_TEST_OPTIONS_HEADER}" STREQUAL "")
        list (APPEND extra_defs -DOPTIONS_HEADER=${OPT_TEST_OPTIONS_HEADER})
    endif ()

    if (NOT "${OPT_TEST_INPUT_MESSAGES}" STREQUAL "")
        list (APPEND extra_defs -DINPUT_MESSAGES=${OPT_TEST_INPUT_MESSAGES})
    endif ()

    if (NOT "${OPT_TEST_INPUT_MESSAGES_HEADER}" STREQUAL "")
        list (APPEND extra_defs -DINPUT_MESSAGES_HEADER=${OPT_TEST_INPUT_MESSAGES_HEADER})
    endif ()

    if (extra_defs)
        target_compile_definitions(${name} PRIVATE ${extra_defs})
    endif ()

    install (
        TARGETS ${name}
        DESTINATION ${BIN_INSTALL_DIR}
    )

    if (TARGET ${CC_EXTERNAL_TGT})
        add_dependencies(${name} ${CC_EXTERNAL_TGT})
    endif ()

    target_compile_options(${name} PRIVATE
        $<$<CXX_COMPILER_ID:MSVC>:/wd4996 /bigobj>
        $<$<CXX_COMPILER_ID:GNU>:-Wno-unused-function -ftemplate-depth=2048>
        $<$<CXX_COMPILER_ID:Clang>:-Wno-unused-function -Wno-unneeded-internal-declaration -ftemplate-depth=2048>
    )
endfunction ()

######################################################################

if ("${OPT_TEST_INTERFACE}" STREQUAL "")
    set (OPT_TEST_INTERFACE "ublox::Message")
endif ()

if ("${OPT_TEST_FRAME}" STREQUAL "")
    set (OPT_TEST_FRAME "ublox::frame::UbloxFrame")
endif ()

if ("${OPT_TEST_OPTIONS}" STREQUAL "")
    set (OPT_TEST_OPTIONS "ublox::options::DefaultOptions")
endif ()

if ("${OPT_TEST_INPUT_MESSAGES}" STREQUAL "")
    set (OPT_TEST_INPUT_MESSAGES "ublox::input::AllMessages")
endif ()

string (REPLACE "::" "/" OPT_TEST_INTERFACE_HEADER "${OPT_TEST_INTERFACE}.h")
string (REPLACE "::" "/" OPT_TEST_FRAME_HEADER "${OPT_TEST_FRAME}.h")
string (REPLACE "::" "/" OPT_TEST_OPTIONS_HEADER "${OPT_TEST_OPTIONS}.h")
string (REPLACE "::" "/" OPT_TEST_INPUT_MESSAGES_HEADER "${OPT_TEST_INPUT_MESSAGES}.h")

define_test(ublox_input_test)
