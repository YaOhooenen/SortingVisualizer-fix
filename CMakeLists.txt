cmake_minimum_required(VERSION 3.15)
project(SortingVisualizer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
    set(gtest_force_shared_crt OFF CACHE BOOL "" FORCE)
elseif(MINGW)
    add_link_options(-mconsole)
endif()

add_library(sorting_lib STATIC src/visualizer.cpp)
target_include_directories(sorting_lib PUBLIC include)

find_package(Threads REQUIRED)
target_link_libraries(sorting_lib PUBLIC Threads::Threads)

add_executable(sorting_visualizer src/main.cpp)
target_link_libraries(sorting_visualizer PRIVATE sorting_lib)

add_executable(scenario_bubble    tests/scenario_bubble.cpp)
add_executable(scenario_selection tests/scenario_selection.cpp)
add_executable(scenario_insertion tests/scenario_insertion.cpp)
add_executable(scenario_quick     tests/scenario_quick.cpp)
add_executable(scenario_merge     tests/scenario_merge.cpp)
add_executable(scenario_error     tests/scenario_error_handling.cpp)
add_executable(scenario_perf      tests/scenario_performance.cpp)

foreach(scn scenario_bubble scenario_selection scenario_insertion
            scenario_quick scenario_merge scenario_error scenario_perf)
    target_link_libraries(${scn} PRIVATE sorting_lib)
endforeach()

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(unit_tests
    tests/test_sorting.cpp
    tests/test_visualizer.cpp
)
target_link_libraries(unit_tests PRIVATE sorting_lib gtest_main)
target_include_directories(unit_tests PRIVATE include)

add_test(NAME SortingTests COMMAND unit_tests)