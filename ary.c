//
// Created by Joseph on 6/8/2018.
//

#include "ary.h"
#include "util/util.h"
#include "ary/safeary.h"

// _____________________________
// CONTROLLER METHODS (NO-MAKE).

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

struct s_c_ARY Ary = {&_safeary_make,
                        &kill, &capacity, &get, &set};