#include <stdio.h>  

// Global variable
int globalVariable = 50; 

// Using #define
#define CONSTANT_VALUE 50

void function1()
{
    globalVariable = 75; 
    // Modify the global variable
}

void function2()
{
    printf("Global variable: %d\n", globalVariable);
    printf("Constant value: %d\n", CONSTANT_VALUE);
}

int main()
{
    function1();
    function2();
}