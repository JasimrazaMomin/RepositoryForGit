#include <stdio.h>

int main()
{
    int x = 5;
    printf("Original value: %d\n", x);

    printf("After x++: %d\n", x++); // Postfix increment ; the ++ is read after the x so the x =5 is used instead of the x=6
    printf("Print x after x++ is applied: %d\n", x);
    printf("Print x again: %d\n", x);
    printf("After ++x: %d\n", ++x); // Prefix increment ; the ++ is read before the x so the new x value is used

    printf("After x--: %d\n", x--); // Postfix decrement
    printf("Print x after x-- is applied: %d\n", x);
    printf("Print x again: %d\n", x);
    printf("After --x: %d\n", --x); // Prefix decrement
}
