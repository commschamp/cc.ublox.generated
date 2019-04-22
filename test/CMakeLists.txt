######################################################################
function (define_test name)
    set (src ${name}.cpp)
    add_executable(${name} ${src})
    target_link_libraries(${name} PRIVATE cc::comms ublox)

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

if ((CMAKE_COMPILER_IS_GNUCC) OR ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang"))
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-function")
endif ()

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unneeded-internal-declaration")
endif ()

define_test(ublox_input_test)
