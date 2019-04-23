add_executable(
    MainUnitTests

    # test src files
    buildHello_test.cpp
    )

target_link_libraries(
    MainUnitTests

    gtest_main

    # test libraries from src
    helloStuff

    -lgtest
    )

add_test(
  NAME
    unit
  COMMAND
    ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/MainUnitTests
)
