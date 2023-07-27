#include <stdio.h>
#include <string.h>

// Define the struct
struct Person
{
    char name[50];
    int age;
    float height;
};

int main()
{
    // Declare and initialize a struct variable
    struct Person person1;
    strcpy(person1.name, "John Brown");
    person1.age = 29;
    person1.height = 1.77;

    // Accessing and printing the struct members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);
}