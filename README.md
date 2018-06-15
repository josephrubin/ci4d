# c is for data <sub>(ci4d)</sub>

Data structures that are so desperately missing from the C language and standard libraries.

**SafeAry**
An array that safely gives you random access, and throws an exception if you attempt to access an index outside of its bounds.

Usage:
```
#include <stdio.h>
#include "../ci4d.h"

int main()
{
    ARY *mySafeAry = Ary.safeary(20);
    printf("capac: %d\n", Ary.capacity(mySafeAry));

    Ary.set(mine, 7, PTR(int, 4));
    printf("value: %d\n", *(int *)Ary.get(mySafeAry, 7));

    Ary.kill(mine);
}
```
