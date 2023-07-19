#include <stdio.h>

int main()
{

    int x = 10, y = 20, *p1, *p2;
    p1 = &x;
    p2 = &y;

    printf("The initial values:\n");
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    printf("The address of x is: %p\n", &x);
    printf("The address of y is: %p\n", &y);
    printf("The address p1 is: %p\n", p1);
    printf("The address p2 is: %p\n", p2);
    printf("\n");

    *p1 = *p2; // x = y
    printf("After *p1 = *p2:\n");
    printf("x=%d\n", x); // *p1 ->x
    printf("y=%d\n", y); // *p2 ->y
    printf("Value at address pointed by p1: %d\n", *p1);
    printf("Value at address pointed by p2: %d\n", *p2);

    printf("The address of x is: %p\n", &x);
    printf("The address of y is: %p\n", &y);
    printf("The address p1: %p\n", p1);
    printf("The address p2: %p\n", p2);
}