#include <stdio.h>

int main()
{
    float balance;
    int error = 1;
    while (error != 0)
    {
        printf("Enter your inital balance: ");
        scanf("%f", &balance);
        if (balance >= 0){
            error = 0;
        }
        else {
            printf("Entered value is invalid!\n");
        }
    }
    int choice = 1;
    float bal_change;
    while (choice != 0)
    {
        printf("Select an operation:\n1. Deposit\n2. Withdraw\n3. Check Balance\n0. Exit\n>>> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter how much you'd like to deposit: ");
            scanf("%f", &bal_change);
            if (bal_change >= 0){
                balance += bal_change;
            }
            else {
                printf("Not a valid input (Make sure it is a positive number!)");
            }
            break;
        case 2:
            printf("Enter how much you'd like to withdraw: ");
            scanf("%f", &bal_change);
            if (bal_change >= 0){
                balance -= bal_change;
            }
            else {
                printf("Not a valid input (Make sure it is a positive number!)");
            }
            break;
        case 3:
            printf("You have $%.2f in your account.\n", balance);
            break;
        case 0:
            printf("Thank you for using our bank!\n");
            break;
        default:
            printf("Enter a valid selection\n");
        }
    }
}