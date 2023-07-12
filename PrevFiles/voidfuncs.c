#include <stdio.h>
void printArray(int rows, int cols, int array[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int matrix[3][4] = {
        {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    printArray(3, 4, matrix); // Call the function to print the array
    return 0;
}