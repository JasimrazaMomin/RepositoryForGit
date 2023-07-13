#include <stdio.h>
#include <math.h>

int main()
{
    float balance;
    float temp_interest; // initialize variables
    int years;
    int error = 1; // use error as a loop condition incase incorrect inputs
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
        printf("Enter your interest rate (Please enter as a decimal e.g. 15%% as 0.15): "); // cant enter a negative interest so loop to catch it
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

    const float interest = temp_interest; // set the constant interest to the temp one from user to make it unchangable
    int choice = 1;
    float future_bal; // initialize variables for future balance and changes
    float bal_change;
    while (choice != 0)
    { // print menu and ask for selection
        printf("Select an operation:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Future Balance Using Interest Rate\n0. Exit\n>>> ");
        scanf("%d", &choice);
        switch (choice) // use a swtich statement with the choice and cases
        {
        case 1:
            printf("Enter how much you'd like to deposit: ");
            scanf("%f", &bal_change); // ask for deposit amount and change it if non-negative
            if (bal_change >= 0)
            {
                balance += bal_change;
            }
            else
            {
                printf("Not a valid input (Make sure it is a positive number!)\n");
            }
            break;
        case 2:
            printf("Enter how much you'd like to withdraw: "); // ask the user for the withdraw amount
            scanf("%f", &bal_change);
            if (bal_change > balance)
            {
                printf("Cannot withdraw more money than in your account!\n"); // output an error if trying to take out too much money
            }
            else if (bal_change >= 0)
            { // edit the balance if the number is non-negative
                balance -= bal_change;
            }
            else
            {
                printf("Not a valid input (Make sure it is a positive number!)\n");
            }
            break;
        case 3:
            printf("You have $%.2f in your account.\n", balance); // output user balance to 2 decimal points
            break;
        case 4:
            printf("Enter how many years the interest will accumulate for: "); // ask the number of years for interest
            scanf("%f", &years);                                               // using integer for years cause years must be whole nums
            if (years >= 1)
            {
                future_bal = balance * pow((1.0 + interest), (float)years);                                            // calculate the future bal using formula
                printf("Your future balance with an interest rate of %.2f%% is $%.2f.\n", 100 * interest, future_bal); // output the interest and future balance
            }
            else
            {
                printf("Enter a positive number of years!\n"); // incase user inputs 0 or negative years
            }
            break;
        case 0:
            printf("Thank you for using our bank!\n"); // exit message
            break;
        default:
            printf("Enter a valid selection\n"); // default message if wrong selection
        }
    }
    return 0;
}