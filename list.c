//
// Created by Joseph on 6/15/2018.
//

#include "list.h"
#include "util/util.h"
#include "list/seqlist.h"

// _____________
// MAKE METHODS.

static LIST *seqlist(int capacity)
{
    mlc(LIST, make);

    make->capacity = capacity;

    make->_kill = seqlist_kill;
    make->_size = seqlist_size;
    make->_append = seqlist_append;
    make->_prepend = seqlist_prepend;
}

// _________________________
// OTHER CONTROLLER METHODS.

static void kill(struct s_LIST *this)
{
    return this->_kill(this);
}

static int size(struct s_LIST *this)
{
    return this->_size(this);
}

static void append(struct s_LIST *this, void *item)
{
    return this->_append(this, item);
}

static void prepend(struct s_LIST *this, void *item)
{
    return this->_prepend(this, item);
}

// ___________
// CONTROLLER.

struct s_c_LIST List = {&seqlist,
                      &kill, &size, &append, &prepend};
