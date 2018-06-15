//
// Created by Joseph on 6/15/2018.
//

#include "list.h"
#include "util/util.h"
#include "list/seqlist.h"

// _____________________________
// CONTROLLER METHODS (NO-MAKE).

static void kill(LIST *this)
{
    return this->_kill(this);
}

static int size(LIST *this)
{
    return this->_size(this);
}

static void append(LIST *this, void *item)
{
    return this->_append(this, item);
}

static void prepend(LIST *this, void *item)
{
    return this->_prepend(this, item);
}

// ___________
// CONTROLLER.

struct s_c_LIST List = {&_seqlist_make,
                      &kill, &size, &append, &prepend};
