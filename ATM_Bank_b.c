#include <stdio.h>
#include <math.h>

int main()
{
    float balance;
    float temp_interest;
    int years;
    int error = 1;
    while (error != 0)
    {
        printf("Enter your inital balance: ");
        scanf("%f", &balance);
        if (balance >= 0)
        {
            error = 0;
        }
        else
        {
            printf("Please enter a positive value!\n");
        }
    }
    error = 1;
    while (error != 0)
    {
        printf("Enter your interest rate (Please enter as a decimal e.g. 15%% as 0.15): ");
        scanf("%f", &temp_interest);
        if (temp_interest >= 0)
        {
            error = 0;
        }
        else
        {
            printf("Please enter a positive interest value!\n");
        }
    }

    const float interest = temp_interest;
    int choice = 1;
    float future_bal;
    float bal_change;
    while (choice != 0)
    {
        printf("Select an operation:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Future Balance Using Interest Rate\n0. Exit\n>>> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter how much you'd like to deposit: ");
            scanf("%f", &bal_change);
            if (bal_change >= 0)
            {
                balance += bal_change;
            }
            else
            {
                printf("Not a valid input (Make sure it is a positive number!)");
            }
            break;
        case 2:
            printf("Enter how much you'd like to withdraw: ");
            scanf("%f", &bal_change);
            if (bal_change >= 0)
            {
                balance -= bal_change;
            }
            else
            {
                printf("Not a valid input (Make sure it is a positive number!)");
            }
            break;
        case 3:
            printf("You have $%.2f in your account.\n", balance);
            break;
        case 4:
            printf("Enter how many years the interest will accumulate for: ");
            scanf("%f",&years);
            future_bal = balance * pow((1.0+interest),(float)years);
            printf("Your future balance with an interest rate of %.2f%% is $%.2f.\n",100*interest,future_bal);
            break;
        case 0:
            printf("Thank you for using our bank!\n");
            break;
        default:
            printf("Enter a valid selection\n");
        }
    }
}