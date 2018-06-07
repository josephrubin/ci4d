//
// Created by Joseph on 6/8/2018.
//

#include <stdio.h>
#include "ci4d.h"

int main()
{
    ARY *mine = Ary.safeary(20);
    printf("capac: %d\n", Ary.capacity(mine));

    Ary.set(mine, 7, PTR(int, 4));
    printf("value: %d\n", *(int *)Ary.get(mine, 7));
}