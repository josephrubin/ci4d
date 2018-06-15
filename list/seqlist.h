//
// Created by Joseph on 6/15/2018.
//

#ifndef CI4D_SEQLIST_H
#define CI4D_SEQLIST_H

#include "../list.h"

LIST *_seqlist_make(int capacity);

void seqlist_kill(LIST *this);

int seqlist_size(LIST *this);

void seqlist_append(LIST *this, void *value);

void seqlist_prepend(LIST *this, void *value);

#endif //CI4D_SEQLIST_H
