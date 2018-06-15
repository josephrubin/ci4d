//
// Created by Joseph on 6/15/2018.
//

#ifndef CI4D_LIST_H
#define CI4D_LIST_H

#include "ftypes.h"

// _______
// STRUCT.

/**
 * @private
 */
struct s_LIST
{
    // _______
    // FIELDS.

    /**
     * Pointer to one of many containers.
     * A container is either a pointer to a node, or an item (void *) itself.
     * @private
     */
    void **containers;

    /**
     * The number of items we have reserved memory for.
     * @private
     */
    int capacity;

    /**
     * The number of items that are currently stored.
     * @private
     */
    int size;

    // ________
    // METHODS.

    /**
     * Frees the associated memory.
     * @private
     */
    list_kill _kill;

    /**
     * Returns the size.
     * @private
     */
    list_size _size;

    /**
     * Adds an item after the last item.
     * @private
     */
    list_append _append;

    /**
     * Adds an item before the first item.
     * @private
     */
    list_prepend _prepend;
};

// __________________
// CONTROLLER STRUCT.

/**
 * @private
 */
struct s_c_LIST
{
    seqlist_make safeary;

    list_kill kill;
    list_size size;
    list_append append;
    list_prepend prepend;
};

extern struct s_c_LIST List;

// ________
// TYPEDEF.

typedef struct s_LIST LIST;

#endif //CI4D_LIST_H
