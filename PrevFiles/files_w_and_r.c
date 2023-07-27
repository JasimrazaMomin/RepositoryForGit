#include <stdio.h>
int main()
{
    FILE *inputFile = fopen("A.txt", "r");
    FILE *outputFile = fopen("B.txt", "w"); // Open "B.txt" in writemode
    if (inputFile == NULL || outputFile == NULL)
    {
        printf("Error opening the files.\n");
        return 1;
    }
    double number;
    while (fscanf(inputFile, "%lf", &number) == 1)
    {
        printf("%.3lf ", number * 2);              // Print the multiplied value to the console
        fprintf(outputFile, "%.3lf ", number * 2); // Write the multiplied value to "B.txt"
        char ch = fgetc(inputFile);                // Read the next character
        if (ch == '\n' || ch == EOF)
        {
            printf("\n");
            fprintf(outputFile, "\n"); // Write a new line to "B.txt" after each line
        }
    }
    fclose(inputFile);
    fclose(outputFile); // Close the output file
}