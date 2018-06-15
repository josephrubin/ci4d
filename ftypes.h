//
// Created by Joseph on 6/8/2018.
//

#ifndef CI4D_FTYPES_H
#define CI4D_FTYPES_H

struct s_ARY;

// ___________________________
// MAKE (all data structures).

typedef struct s_ARY  *(*safeary_make)(int capacity);

typedef struct s_LIST *(*seqlist_make)(int capacity);

// ____
// ARY.

typedef void  (*ary_kill)(struct s_ARY *this);
typedef int   (*ary_capacity)(struct s_ARY *this);
typedef void *(*ary_get)(struct s_ARY *this, int index);
typedef void  (*ary_set)(struct s_ARY *this, int index, void *item);

// _____
// LIST.

typedef void (*list_kill)(struct s_LIST *this);
typedef int  (*list_size)(struct s_LIST *this);
typedef void (*list_append)(struct s_LIST *this, void *item);
typedef void (*list_prepend)(struct s_LIST *this, void *item);

#endif //CI4D_FTYPES_H
