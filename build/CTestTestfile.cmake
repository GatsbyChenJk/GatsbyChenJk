# CMake generated Testfile for 
# Source directory: C:/Users/25768/Desktop/cppjieba-master/cppjieba-master
# Build directory: C:/Users/25768/Desktop/论文查重程序/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(./test/test.run "./test/test.run")
  set_tests_properties(./test/test.run PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;26;ADD_TEST;C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(./test/test.run "./test/test.run")
  set_tests_properties(./test/test.run PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;26;ADD_TEST;C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(./test/test.run "./test/test.run")
  set_tests_properties(./test/test.run PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;26;ADD_TEST;C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(./test/test.run "./test/test.run")
  set_tests_properties(./test/test.run PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;26;ADD_TEST;C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;0;")
else()
  add_test(./test/test.run NOT_AVAILABLE)
endif()
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(./load_test "./load_test")
  set_tests_properties(./load_test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;27;ADD_TEST;C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(./load_test "./load_test")
  set_tests_properties(./load_test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;27;ADD_TEST;C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(./load_test "./load_test")
  set_tests_properties(./load_test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;27;ADD_TEST;C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(./load_test "./load_test")
  set_tests_properties(./load_test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;27;ADD_TEST;C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;0;")
else()
  add_test(./load_test NOT_AVAILABLE)
endif()
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(./demo "./demo")
  set_tests_properties(./demo PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;28;ADD_TEST;C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(./demo "./demo")
  set_tests_properties(./demo PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;28;ADD_TEST;C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(./demo "./demo")
  set_tests_properties(./demo PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;28;ADD_TEST;C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(./demo "./demo")
  set_tests_properties(./demo PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;28;ADD_TEST;C:/Users/25768/Desktop/cppjieba-master/cppjieba-master/CMakeLists.txt;0;")
else()
  add_test(./demo NOT_AVAILABLE)
endif()
subdirs("deps")
subdirs("test")