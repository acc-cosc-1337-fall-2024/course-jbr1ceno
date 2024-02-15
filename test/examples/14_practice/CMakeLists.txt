add_executable(ex_14_tests "14_practice_tests.cpp")
target_link_libraries(ex_14_tests ex_14_01_library ex_14_02_library)
add_test(NAME ex_14_tests COMMAND ex_14_tests -s)