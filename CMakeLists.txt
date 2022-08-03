cmake_minimum_required(VERSION 3.22)
project(cadt)

set(CMAKE_CXX_STANDARD 23)

add_executable(cadt
        main.cpp
        benchmark/linked_list_benchmark.cpp
        benchmark/linked_list_benchmark
        lib/testing/test.cpp
        lib/testing/test.h
        lib/testing/test_assert.cpp
        lib/testing/test_assert.h
        lib/testing/test_runner.cpp
        lib/testing/test_runner.h
        lib/testing/test_suite.cpp
        lib/testing/test_suite.h
        src/data_structures/linked_list.cpp
        src/data_structures/linked_list.h
        src/data_structures/node.cpp
        src/data_structures/node.h
        src/data_structures/queue.cpp
        src/data_structures/queue.h
        src/data_structures/stack.cpp
        src/data_structures/stack.h
        test/ds_test_runner.cpp
        test/ds_test_runner.h
        test/linked_list_test/linked_list_test.cpp
        test/linked_list_test/linked_list_test.h
        test/node_test/node_test.cpp
        test/node_test/node_test.h
        test/queue_test/queue_test.cpp
        test/queue_test/queue_test.h
        test/stack_test/stack_test.cpp
        test/stack_test/stack_test.h)
