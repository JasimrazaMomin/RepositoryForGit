#include <stdio.h>

int area(int a,int b);

int main(void)
{
    int choice, num1, num2;
    printf("Want to use function 1 or 2: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter an Integer: ");
        scanf("%d", &num1);

        printf("Enter another Integer: ");
        scanf("%d", &num2);

        if (num1 == num2)
        {
            printf("The entered Integers are: %d = %d\n", num1, num2);
        }
        else if (num1 > num2)
        {
            printf("The entered Integers are: %d > %d\n", num1, num2);
        }
        else
        {
            printf("The entered Integers are: %d < %d\n", num1, num2);
        }
    }
    else
    {
        printf("Enter first side length: ");
        scanf("%d", &num1);
        printf("Enter second side length: ");
        scanf("%d", &num2);
        int temp = area(num1, num2);
        printf("The area is: %d\n", temp);
    }
}

int area(int a, int b)
{
    int c;
    c = a * b;
    return c;
}

// If you dont put \n then terminal will put a white highlighted % sign after it