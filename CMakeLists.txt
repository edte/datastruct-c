cmake_minimum_required(VERSION 3.17)
project(c_test C)

set(CMAKE_C_STANDARD 99)

add_executable(c_test main.c string/string.c string/string.h binary-tree-sequence/tree.h binary-tree-sequence/tree.c binary-tree-linked/tree.c binary-tree-linked/tree.h)