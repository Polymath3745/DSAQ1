cmake_minimum_required(VERSION 3.15)
project(googleTest_practice)

# Set the build type
set(CMAKE_BUILD_TYPE Debug)

# Add the path to Google Test (optional if installed system-wide)
list(APPEND CMAKE_PREFIX_PATH "/usr/local/lib/cmake")

# Find Google Test package
find_package(GTest REQUIRED)

# Include directories for project
include_directories(include src)

# Add your source files for the main executable
add_executable(MAIN 
    src/main.cpp
    src/LinkedList.cpp 
)

# Add your source files for the test executable
add_executable(TEST 
    test/test_main.cpp
    test/LinkedListTest.cpp
    src/LinkedList.cpp
)

# Link your test executable with Google Test and Google Test Main
target_link_libraries(TEST PRIVATE GTest::GTest GTest::Main)

# Register your tests
enable_testing()
add_test(NAME TEST COMMAND TEST)

# this makes the tests discoverable in vscode
gtest_discover_tests(TEST)