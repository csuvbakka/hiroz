cmake_minimum_required (VERSION 2.8)
project(hiroz)

set(THIRD_PARTY_RANGES "range-v3")
include_directories("${THIRD_PARTY_RANGES}/include")

#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -stdlib=libstdc++")
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

add_executable(hiroz main.cpp)
target_link_libraries(hiroz stdc++)
