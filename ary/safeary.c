//
// Created by Joseph on 6/8/2018.
//

#include <stdlib.h>
#include "safeary.h"
#include "../util/util.h"

/**
 * @private
 */
void safeary_kill(ARY *this)
{
    if (this->items)
    {
        free(this->items);
    }

    free(this);
}

/**
 * @private
 */
int safeary_capacity(ARY *this)
{
    return this->capacity;
}

/**
 * @private
 */
void *safeary_get(struct s_ARY *this, int index)
{
    if (index >= this->capacity)
    {
        throw("Index out of bounds on safe array get!");
    }
    return this->items[index];
}

/**
 * @private
 */
void safeary_set(struct s_ARY *this, int index, void *value)
{
    if (index >= this->capacity)
    {
        throw("Index out of bounds on safe array set!");
    }
    this->items[index] = value;
}

/**
 * @private
 */
ARY *_safeary_make(int capacity)
{
    mlc(ARY, make, safeary_kill);

    make->capacity = capacity;

    make->_kill = safeary_kill;
    make->_capacity = safeary_capacity;
    make->_get = safeary_get;
    make->_set = safeary_set;

    return make;
}