#include <stdio.h>
int main()
{
    int numbers1[5]; // Declaration of an integer array with size 5 
    int numbers2[5] = {10, 20, 30, 40, 50};
    // Printing the array elements without initializing
    printf("without initializing:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("numbers1[%d] = %d\n", i, numbers1[i]);
    }
    printf("\nwith initializing\n");
    // Printing the array elements with initializing
    for (int i = 0; i < 5; i++)
    {
        printf("numbers2[%d] = %d\n", i, numbers2[i]);
    }
}