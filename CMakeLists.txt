cmake_minimum_required(VERSION 3.10)
project(ci4d C)

set(CMAKE_C_STANDARD 99)

add_library(ci4d ary.c ary.h list.c list.h ftypes.h ci4d.h list/seqlist.c list/seqlist.h ary/safeary.c ary/safeary.h util/util.h)