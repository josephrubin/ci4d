# c is for data <sub>ci4d</sub>

Data structures that are so desperately missing from the C language and standard libraries.

**SafeAry**

An array that safely gives you random access, and throws an exception if you attempt to access an index outside of its bounds.

Usage:
```
#include <stdio.h>
#include "../ci4d.h"

int main()
{
    // Make a new Safe Ary and automatically reserve space for it.
    ARY *mySafeAry = Ary.safeary(20);

    // A Safe Ary keeps track of its capacity.
    printf("capac: %d\n", Ary.capacity(mySafeAry));

    // Set an index (random access).
    // A Safe Ary can hold any value (void *),
    // so we use the PTR utility function to create a
    // pointer to an integer.
    Ary.set(mine, 7, PTR(int, 4));

    // Get an index (random access).
    printf("value: %d\n", *(int *)Ary.get(mySafeAry, 7));

    // Free the Safe Ary itself and any memory associated with it.
    Ary.kill(mine);
}
```
