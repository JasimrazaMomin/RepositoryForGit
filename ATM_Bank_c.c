#include <stdio.h>
#include <math.h>

int main()
{
    int account_nums;
    float temp_interest;
    int years;
    int error = 1;
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
            printf("Please enter a number greater than or equal to 1!\n");
        }
    }
    error = 1;
    float balance[account_nums];
    for (int i = 0; i < account_nums; i++)
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
                printf("Please enter a positive value!\n");
            }
        }
        error = 1;
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
    int account_choice = 0;
    float future_bal;
    float bal_change;
    while (choice != 0)
    {
        printf("Current Account Number: %d\nSelect an operation:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Future Balance Using Interest Rate\n5. Switch Account\n6. Display All Balances\n0. Exit\n>>> ", 1 + account_choice);
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter how much you'd like to deposit: ");
            scanf("%f", &bal_change);
            if (bal_change >= 0)
            {
                balance[account_choice] += bal_change;
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
                balance[account_choice] -= bal_change;
            }
            else
            {
                printf("Not a valid input (Make sure it is a positive number!)");
            }
            break;
        case 3:
            printf("You have $%.2f in your account.\n", balance[account_choice]);
            break;
        case 4:
            printf("Enter how many years the interest will accumulate for: ");
            scanf("%d", &years);
            future_bal = balance[account_choice] * pow((1.0 + interest), (float)years);
            printf("Your future balance with an interest rate of %.2f%% is $%.2f.\n", 100 * interest, future_bal);
            break;
        case 5:
            error = 1;
            while (error != 0)
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
            for (int i = 0; i < account_nums; i++)
            {
                printf("Balance for account #%d = $%.2f\n", 1 + i, balance[i]);
            }
            break;
        case 0:
            printf("Thank you for using our bank!\n");
            break;
        default:
            printf("Enter a valid selection\n");
        }
    }
    return 0;
}