target_sources(hiroz_core
    PRIVATE
    PUBLIC
        "${CMAKE_CURRENT_LIST_DIR}/hero.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/hero.cpp"
)

target_include_directories(hiroz_core PUBLIC "${CMAKE_CURRENT_LIST_DIR}")
