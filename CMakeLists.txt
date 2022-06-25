cmake_minimum_required(VERSION 3.22)
project(cadt)

set(CMAKE_CXX_STANDARD 23)

add_executable(cadt
        main.cpp
        data-structures/linked_list/linked_list.cpp
        data-structures/linked_list/linked_list.h
        data-structures/node/node.cpp
        data-structures/node/node.h
        data-structures/stack/stack.cpp
        data-structures/stack/stack.h)
