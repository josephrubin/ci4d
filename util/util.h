//
// Created by Joseph on 6/8/2018.
//

#ifndef CI4D_UTIL_H
#define CI4D_UTIL_H

#include <stdio.h>
#include <stdlib.h>

// Make a pointer to a literal on the stack.
#ifndef PTR
    #define PTR(type, value) (&(type){value})
#endif

// Print to stderr and exit with failure.
#ifndef throw
    #define throw(msg) fprintf(stderr, "Error: " #msg "\n"); exit(EXIT_FAILURE);
#endif

#define mlc(type, name, kill)\
    type *name = malloc(sizeof *name);\
    if (!name)\
    {\
        kill(name);\
        throw("malloc failure");\
    }

#define clc(nitems, size)\
    void *ptr_abc123 = calloc(nitems, size);\
    if (!ptr_abc123)\
    {\
        kill(make);\
        throw("calloc failure");\
    }\
    return ptr_abc123;

#define rlc(exptr)\
    void *ptr_abc123 = realloc(exptr);\
    if (!ptr_abc123)\
    {\
        kill(make);\
        throw("realloc failure");\
    }\
    return ptr_abc123;

#endif //CI4D_UTIL_H
