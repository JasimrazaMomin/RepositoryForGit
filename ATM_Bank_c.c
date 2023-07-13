#include <stdio.h>
#include <math.h>

int main()
{
    const int account_nums; // make a constant int for accounts to make it unchangable and initialize rest of the variables
    float temp_interest;
    int years;
    int error = 1; // error for loop condition for invalid entries
    while (error != 0)
    {
        printf("Enter the number of accounts: ");
        scanf("%d", &account_nums);
        if (account_nums >= 1)
        {
            error = 0;
        }
        else
        {
            printf("Please enter a number greater than or equal to 1!\n"); // must enter positive acccount number
        }
    }
    error = 1;
    float balance[account_nums];           // intialize the array using the account nums
    for (int i = 0; i < account_nums; i++) // use a for loop to ask for each accounts balance
    {
        while (error != 0)
        {
            printf("Enter your inital balance for account %d: ", 1 + i);
            scanf("%f", &balance[i]);
            if (balance[i] >= 0)
            {
                error = 0;
            }
            else
            {
                printf("Please enter a positive value!\n"); // making sure balance is non-negative
            }
        }
        error = 1;
    }
    error = 1;
    while (error != 0)
    {
        printf("Enter your interest rate (Please enter as a decimal e.g. 15%% as 0.15): "); // asking for interest
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

    const float interest = temp_interest; // making the interest unchangeable using constants
    int choice = 1;
    int account_choice = 0; // initializing rest of the variables
    float future_bal;
    float bal_change;
    while (choice != 0)
    {
        printf("Current Account Number: %d\nSelect an operation:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Future Balance Using Interest Rate\n5. Switch Account\n6. Display All Balances\n0. Exit\n>>> ", 1 + account_choice);
        scanf("%d", &choice); // print menu and ask the user for their selection, also output account number, using 1+account number because im using the account number as 0 indexed
        switch (choice)       // make switch statement using choice and cases
        {
        case 1:
            printf("Enter how much you'd like to deposit: "); // get deposit amount and apply changes to the user account # if its positive
            scanf("%f", &bal_change);
            if (bal_change >= 0)
            {
                balance[account_choice] += bal_change;
            }
            else
            {
                printf("Not a valid input (Make sure it is a positive number!)\n");
            }
            break;
        case 2:
            printf("Enter how much you'd like to withdraw: "); // ask the user for the withdraw amount
            scanf("%f", &bal_change);
            if (bal_change > balance[account_choice])
            {
                printf("Cannot withdraw more money than in your account!\n"); // output an error if trying to take out too much money
            }
            else if (bal_change >= 0)
            { // edit the balance if the number is non-negative
                balance[account_choice] -= bal_change;
            }
            else
            {
                printf("Not a valid input (Make sure it is a positive number!)\n");
            }
            break;
        case 3:
            printf("You have $%.2f in your account.\n", balance[account_choice]); // print out balance
            break;
        case 4:
            printf("Enter how many years the interest will accumulate for: ");
            scanf("%d", &years); // ask for years in whole numbers
            if (years >= 1)
            {
                future_bal = balance[account_choice] * pow((1.0 + interest), (float)years);
                printf("Your future balance with an interest rate of %.2f%% is $%.2f.\n", 100 * interest, future_bal);
            }
            else
            {
                printf("Enter a positive number of years!\n"); // incase user inputs 0 or negative years
            }
            break;
        case 5:
            error = 1;
            while (error != 0)// ask user for account number and check if it exists 
            {
                printf("Enter the account number you'd like to switch to: ");
                scanf("%d", &account_choice);
                account_choice--;
                if (account_choice < account_nums && account_choice >= 0)
                {
                    error = 0;
                }
                else
                {
                    printf("Invalid account number!\n");
                }
            }
            break;
        case 6:
            for (int i = 0; i < account_nums; i++) // print out all account numbers 
            {
                printf("Balance for account #%d = $%.2f\n", 1 + i, balance[i]);
            }
            break;
        case 0:
            printf("Thank you for using our bank!\n");//exit message
            break;
        default:
            printf("Enter a valid selection\n"); //default message incase of invalid selection
        }
    }
    return 0;
}