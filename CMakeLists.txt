cmake_minimum_required(VERSION 3.10)
project(ci4d C)

set(CMAKE_C_STANDARD 99)

add_library(ci4d ary.c ary.h ftypes.h test.c ci4d.h ary/safeary.c ary/safeary.h util/util.h)