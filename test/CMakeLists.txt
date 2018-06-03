include_directories("catch/single_include")

add_executable(hiroz_test test_main.cpp)
target_link_libraries(hiroz_test stdc++)
