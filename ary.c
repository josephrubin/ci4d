//
// Created by Joseph on 6/8/2018.
//

#include "ary.h"
#include "util/util.h"
#include "ary/safeary.h"

static void kill(struct s_ARY *this);

// _____________
// MAKE METHODS.

static ARY *safeary(int capacity)
{
    mlc(ARY, make);

    make->capacity = capacity;

    make->_kill = safeary_kill;
    make->_capacity = safeary_capacity;
    make->_get = safeary_get;
    make->_set = safeary_set;
}

// _________________________
// OTHER CONTROLLER METHODS.

static void kill(struct s_ARY *this)
{
    return this->_kill(this);
}

static int capacity(struct s_ARY *this)
{
    return this->_capacity(this);
}

static void *get(struct s_ARY *this, int index)
{
    return this->_get(this, index);
}

static void set(struct s_ARY *this, int index, void *value)
{
    return this->_set(this, index, value);
}

// ___________
// CONTROLLER.

struct s_c_ARY Ary = {&safeary,
                        &kill, &capacity, &get, &set};