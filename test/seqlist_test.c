//
// Created by Joseph on 6/13/2018.
//

#include <stdio.h>
#include "../ci4d.h"

int main()
{
    LIST *mine = List.seqlist(20);
    printf("size: %d\n", List.size(mine));

    List.append(mine, PTR(int, 7));
    List.append(mine, PTR(int, 5));

    List.kill(mine);
}