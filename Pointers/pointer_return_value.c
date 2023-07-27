#include <stdio.h>

int *min(int *n1, int *n2) // sends the address of num1 and num2 which are saved as pointers, printing out the pointer in lldb
// prints out the memory address of num1 and num2, since we are sending back an address you have to save it as a pointer
{
    return (*n1 < *n2) ? n1 : n2;
}
int main()
{
    int num1 = 10;
    int num2 = 5;
    int *result = min(&num1, &num2);
    printf("The minimum value is: %d\n", *result);
}