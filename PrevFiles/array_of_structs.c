#include <stdio.h> 
#include <string.h>
// Define the struct
struct Person
{
    char name[50];
    int age;
    float height; // is in meters (put units to make it easier to read)
};
int main()
{
    // Declare and initialize an array of struct variables 
    struct Person people [3];
    // Initialize the array elements with data
    strcpy(people[0].name, "John Brown");
    people[0].age = 29;
    people[0].height = 1.77;
    strcpy(people[1].name, "Nikki Pangborn");
    people[1].age = 25;
    people[1].height = 1.65;
    strcpy(people[2].name, "Mike Wazowski");
    people[2].age = 34;
    people[2].height = 0.85;
    // Accessing and printing the struct members for each person
    for (int i = 0; i < 3; i++)
    {
        printf("Person %d:\n", i + 1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Height: %.2f\n", people[i].height);
        printf("\n");
    }
}