#include <stdio.h>
#include <stdlib.h> // Include this header for atoi and atof
int main(int argc, char *argv[])
{ // Check the number of inputs
    if (argc != 3)
    {
        printf("Incorrect number of inputs. Expected 2 inputs.\n");
        return 1; // Exit the program with an error status
    }
    // Retrieve the input arguments
    int arg1 = atoi(argv[1]);   // Convert the first argument to an integer
    float arg2 = atof(argv[2]); // Convert the second argument to afloat
    // Use the input arguments
    printf("First argument: %d\n", arg1);
    printf("Second argument: %.2f\n", arg2);
    return 0; // Exit the program with a success status
}