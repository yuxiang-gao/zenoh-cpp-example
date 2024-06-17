cmake_minimum_required(VERSION 3.16)
project(zenoh_test LANGUAGES C CXX)

if(CMAKE_BUILD_TYPE STREQUAL "")
    set(CMAKE_BUILD_TYPE Release)
endif()

# include(FetchContent)

# FetchContent_declare(c_backend GIT_REPOSITORY "https://github.com/eclipse-zenoh/zenoh-c" GIT_TAG main)
# FetchContent_MakeAvailable(c_backend)
# FetchContent_declare(cpp_wrapper GIT_REPOSITORY "https://github.com/eclipse-zenoh/zenoh-cpp" GIT_TAG main)
# FetchContent_MakeAvailable(cpp_wrapper)

# add include 
include_directories(${PROJECT_SOURCE_DIR}/include)
link_directories(${PROJECT_SOURCE_DIR}/lib)

add_executable(zenoh_test zenoh_test.cxx)
target_link_libraries(zenoh_test PRIVATE zenohc)
set_property(TARGET zenoh_test PROPERTY LANGUAGE CXX)
set_property(TARGET zenoh_test PROPERTY CXX_STANDARD 17)
