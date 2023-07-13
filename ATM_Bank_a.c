#include <stdio.h>

int main()
{
    float balance; //a variable made to track the balance of the user
    int error = 1; // used as a way to loop the initial balance incase the user enters a negative number
    while (error != 0)
    {
        printf("Enter your inital balance: ");
        scanf("%f", &balance);
        if (balance >= 0){
            error = 0; // set the error to 0 to exit the while error
        }
        else {
            printf("Please enter a positive value!\n");
        }
    }
    int choice = 1; // choice variable initialized and set to one to allow entrance into while loop
    float bal_change; // created a float to get the balance change from the user
    while (choice != 0)
    {
        printf("Select an operation:\n1. Deposit\n2. Withdraw\n3. Check Balance\n0. Exit\n>>> "); 
        scanf("%d", &choice); // display the menu and get the users choice
        switch (choice) //made a switch using the choice and possible cases 
        {
        case 1:
            printf("Enter how much you'd like to deposit: "); //ask the user for the deposit amount
            scanf("%f", &bal_change);
            if (bal_change >= 0){
                balance += bal_change; //edit the balance if the number is non-negative 
            }
            else {
                printf("Not a valid input (Make sure it is a positive number!)\n");
            }
            break;
        case 2:
            printf("Enter how much you'd like to withdraw: "); //ask the user for the withdraw amount
            scanf("%f", &bal_change);
            if (bal_change > balance){
                printf("Cannot withdraw more money than in your account!\n"); //output an error if trying to take out too much money
            }
            else if (bal_change >= 0){ //edit the balance if the number is non-negative
                balance -= bal_change;
            }
            else {
                printf("Not a valid input (Make sure it is a positive number!)\n");
            }
            break;
        case 3:
            printf("You have $%.2f in your account.\n", balance); // output users balance to 2 decimal points
            break;
        case 0:
            printf("Thank you for using our bank!\n"); //exit message
            break;
        default:
            printf("Enter a valid selection\n"); //message if you enter an invalid choice number
        }
    }
    return 0;
}