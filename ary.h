//
// Created by Joseph on 6/8/2018.
//

#ifndef CI4D_ARY_H
#define CI4D_ARY_H

#include "ftypes.h"

// _______
// STRUCT.

/**
 * @private
 */
struct s_ARY
{
    // _______
    // FIELDS.

    /**
     * Pointer to one of many generic items.
     * @private
     */
    void **items;

    /**
     * The number of items we have reserved memory for.
     * @private
     */
    int capacity;

    // ________
    // METHODS.

    /**
     * Frees the associated memory.
     * @private
     */
    ary_kill _kill;

    /**
     * Returns the capacity.
     * @private
     */
    ary_capacity _capacity;

    /**
     * Returns the value of the item at the specified index.
     * @private
     */
    ary_get _get;

    /**
     * Sets the value of the item at the specified index.
     * @private
     */
    ary_set _set;
};

// __________________
// CONTROLLER STRUCT.

/**
 * @private
 */
struct s_c_ARY
{
    safeary_make safeary;

    ary_kill kill;
    ary_capacity capacity;
    ary_get get;
    ary_set set;
};

extern struct s_c_ARY Ary;

// ________
// TYPEDEF.

typedef struct s_ARY ARY;

#endif //CI4D_ARY_H