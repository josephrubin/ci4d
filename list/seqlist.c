//
// Created by Joseph on 6/15/2018.
//

#include <stdlib.h>
#include "seqlist.h"
#include "../util/util.h"

/**
 * @private
 */
void seqlist_kill(LIST *this)
{
    if (this->containers)
    {
        free(this->containers);
    }

    free(this);
}

/**
 * @private
 */
int seqlist_size(LIST *this)
{
    return this->size;
}

/**
 * @private
 */
void seqlist_append(LIST *this, void *item)
{
    //todo: check for resize needed.
    this->containers[this->size++] = item;
}

/**
 * @private
 */
void seqlist_prepend(LIST *this, void *item)
{
    //todo: check for resize needed.

    // Shift every item forward by one.
    for (int i = 0; i < this->size; i++)
    {
        this->containers[i + 1] = this->containers[i];
    }

    // Insert the new item.
    this->containers[0] = item;
}