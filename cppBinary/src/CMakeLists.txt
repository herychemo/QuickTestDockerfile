
add_library(mainStuff STATIC "")
add_library(helloStuff "")


target_sources(
    helloStuff
    PRIVATE
        hello.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/hello.h
        ${CMAKE_CURRENT_LIST_DIR}/main.h
)

target_include_directories(
    helloStuff
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)


target_link_libraries(helloStuff mainStuff)
target_link_libraries(mainStuff helloStuff)


# add the executable
add_executable(MainBinary main.cpp)

target_link_libraries(MainBinary helloStuff)
