cmake_minimum_required(VERSION 3.15)
project(googleTest_practice)

# Set the build type
set(CMAKE_BUILD_TYPE Debug)

# Add the path to Google Test
#list(APPEND CMAKE_PREFIX_PATH "/usr/local/lib/cmake")

# Specify the path to Google Test
set(GTEST_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/googletest")

# Find Google Test package
find_package(GTest REQUIRED)

# Include directories for project
include_directories(include src)

# Add your source files
add_executable(MAIN 
    src/main.cpp
    src/LinkedList.cpp 
)

# Add your test files
add_executable(TEST 
    test/test_main.cpp
    test/LinkedListTest.cpp
    src/LinkedList.cpp
)

# Link your main application with Student class
target_link_libraries(MAIN PRIVATE)

# Link your test executable with Google Test
target_link_libraries(TEST PRIVATE GTest::GTest GTest::Main)

# Register your tests
enable_testing()
add_test(NAME TEST COMMAND TEST)

# this makes the tests discoverable in vscode
gtest_discover_tests(TEST)
