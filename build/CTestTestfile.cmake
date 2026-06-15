# CMake generated Testfile for 
# Source directory: C:/Users/maksi/source/repos/SortingVisualizer-master
# Build directory: C:/Users/maksi/source/repos/SortingVisualizer-master/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(SortingTests "C:/Users/maksi/source/repos/SortingVisualizer-master/build/Debug/unit_tests.exe")
  set_tests_properties(SortingTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/maksi/source/repos/SortingVisualizer-master/CMakeLists.txt;53;add_test;C:/Users/maksi/source/repos/SortingVisualizer-master/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(SortingTests "C:/Users/maksi/source/repos/SortingVisualizer-master/build/Release/unit_tests.exe")
  set_tests_properties(SortingTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/maksi/source/repos/SortingVisualizer-master/CMakeLists.txt;53;add_test;C:/Users/maksi/source/repos/SortingVisualizer-master/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(SortingTests "C:/Users/maksi/source/repos/SortingVisualizer-master/build/MinSizeRel/unit_tests.exe")
  set_tests_properties(SortingTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/maksi/source/repos/SortingVisualizer-master/CMakeLists.txt;53;add_test;C:/Users/maksi/source/repos/SortingVisualizer-master/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(SortingTests "C:/Users/maksi/source/repos/SortingVisualizer-master/build/RelWithDebInfo/unit_tests.exe")
  set_tests_properties(SortingTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/maksi/source/repos/SortingVisualizer-master/CMakeLists.txt;53;add_test;C:/Users/maksi/source/repos/SortingVisualizer-master/CMakeLists.txt;0;")
else()
  add_test(SortingTests NOT_AVAILABLE)
endif()
subdirs("_deps/googletest-build")
