//
// Created by Joseph on 6/8/2018.
//

#ifndef CI4D_FTYPES_H
#define CI4D_FTYPES_H

struct s_ARY;

// _____
// MAKE.

typedef struct s_ARY *(*safeary_make)(int capacity);

// ____
// ARY.

//typedef struct s_ARY *(*ary_make_t)(int capacity);

typedef void  (*ary_kill)(struct s_ARY *this);

typedef int   (*ary_capacity)(struct s_ARY *this);

typedef void *(*ary_get)(struct s_ARY *this, int index);

typedef void  (*ary_set)(struct s_ARY *this, int index, void *value);

#endif //CI4D_FTYPES_H
