cmake_minimum_required (VERSION 3.9)

project (JenkinsTests)

add_executable(myTester test.cc)

enable_testing()
add_test(NAME test1 COMMAND myTester)
add_test(NAME test2 COMMAND myTester 4)

install(TARGETS myTester
  RUNTIME DESTINATION bin)



