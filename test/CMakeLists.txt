include_directories("${CMAKE_CURRENT_LIST_DIR}/catch/single_include")

target_sources(hiroz_test
    PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}/test_main.cpp"
        "${CMAKE_CURRENT_LIST_DIR}/hero_test.cpp"
)

target_link_libraries(hiroz_test stdc++ hiroz_core)
