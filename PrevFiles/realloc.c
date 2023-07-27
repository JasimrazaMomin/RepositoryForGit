#include <stdio.h>
#include <stdlib.h>

int main()
{

    int initial_size = 20, reSize = 10;
    int *arr = NULL, *new_arr = NULL;

    // Initial allocation of memory for initial_size integers
    arr = (int *)malloc(initial_size * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1;
    }

    printf("Memory Allocation succeeded. The array with %p address: \n", arr);
    // Storing values in the array
    for (int i = 0; i < initial_size; i++)
    {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Reallocate memory to fit reSize integers
    new_arr = (int *)realloc(arr, reSize * sizeof(int));

    if (new_arr == NULL)
    {
        printf("Memory reallocation failed. Exiting the program.\n");
        free(arr); // Free the previously allocated memory before exiting
        return 1;
    }

    printf("\nMemory Re-allocation succeeded. The new array with %p address: \n", new_arr);
    // Storing values in the array
    for (int i = 0; i < reSize; i++)
    {
        printf("%d ", new_arr[i]);
    }

    printf("\n");

    // Don't forget to free the allocated memory when it's no longer needed
    free(new_arr);
}