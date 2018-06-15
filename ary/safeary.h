//
// Created by Joseph on 6/8/2018.
//

#ifndef CI4D_SAFEARY_H
#define CI4D_SAFEARY_H

#include "../ary.h"

void safeary_kill(ARY *this);

int safeary_capacity(ARY *this);

void *safeary_get(ARY *this, int index);

void safeary_set(ARY *this, int index, void *value);

#endif //CI4D_SAFEARY_H
