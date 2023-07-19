#include <stdio.h>

// Function to print the value and address of each element in a 2-dimensional array
void printArrayElements(int rows, int cols, int arr[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int *elementPtr = &arr[i][j]; // Pointer to the element
            printf("Element [%d][%d]: Value = %d, Address = %p\n", i, j, *elementPtr, elementPtr);

            // Modify the element using the pointer
            *elementPtr = *elementPtr * 2; // Doubling the value of the element
        }
    }
}

int main()
{
    int array[][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int rows = sizeof(array) / sizeof(array[0]);
    int cols = sizeof(array[0]) / sizeof(array[0][0]);

    printf("Array elements in main function before modification:\n");
    printArrayElements(rows, cols, array);

    printf("\nArray elements in main function after modification:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: Value = %d, Address = %p\n", i, j, array[i][j], &array[i][j]);
        }
    }
}