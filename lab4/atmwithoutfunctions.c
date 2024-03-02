#include <stdio.h>
#include <stdlib.h>

#define RESET "\x1B[0m"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"

int main()
{

    printf(".----------------.  .----------------.  .----------------.\n");
    printf("| .--------------. || .--------------. || .--------------. |\n");
    printf("| |      __      | || |  _________   | || | ____    ____ | |\n");
    printf("| |     /  \\     | || | |  _   _  |  | || ||_   \\  /   _|| |\n");
    printf("| |    / /\\ \\    | || | |_/ | | \\_|  | || |  |   \\/   |  | |\n");
    printf("| |   / ____ \\   | || |     | |      | || |  | |\\  /| |  | |\n");
    printf("| | _/ /    \\ \\_ | || |    _| |_     | || | _| |_\\/_| |_ | |\n");
    printf("| ||____|  |____|| || |   |_____|    | || ||_____||_____|| |\n");
    printf("| |              | || |              | || |              | |\n");
    printf("| '--------------' || '--------------' || '--------------' |\n");
    printf("'----------------'  '----------------'  '----------------'\n");

    float balance = 0.0;
    int choice;

    while (1)
    {
        printf("\n\t--- " YELLOW "ATM Simulator" RESET " ---\n");
        printf("\t1. " BLUE "Check Balance\n" RESET);
        printf("\t2. " BLUE "Deposit Funds\n" RESET);
        printf("\t3. " BLUE "Withdraw Funds\n" RESET);
        printf("\t4. " BLUE "Quit\n" RESET);
        printf("\tEnter your choice: ");
        scanf("%d", &choice);

        float depositAmount;
        float withdrawAmount;

        switch (choice)
        {
        case 1:
            printf("\tYour current balance is: " GREEN "$%.2f\n" RESET, balance);
            break;
        case 2:
            printf("\tEnter the amount to deposit: " BLUE "$");
            scanf("%f", &depositAmount);

            if (depositAmount <= 0)
            {
                printf(RED "\tInvalid amount. Please enter a positive value.\n" RESET);
            }
            else
            {
                balance += depositAmount;
                printf("\tDeposit of " GREEN "$%.2f" RESET " successful. Your new balance is: " GREEN "$%.2f\n" RESET, depositAmount, balance);
            }
            break;
        case 3:
            printf("\tEnter the amount to withdraw: " BLUE "$");
            scanf("%f", &withdrawAmount);

            if (withdrawAmount <= 0)
            {
                printf(RED "\tInvalid amount. Please enter a positive value.\n" RESET);
            }
            else if (withdrawAmount > balance)
            {
                printf(RED "\tInsufficient funds. You cannot withdraw more than your current balance.\n" RESET);
            }
            else
            {
                balance -= withdrawAmount;
                printf("\tWithdrawal of " GREEN "$%.2f" RESET " successful. Your new balance is: " GREEN "$%.2f\n" RESET, withdrawAmount, balance);
            }
            break;
        case 4:
            printf("\tThank you for using the ATM. " YELLOW "Goodbye!" RESET "\n");
            exit(0);
        default:
            printf(RED "\tInvalid choice. Please enter a valid option.\n" RESET);
            // Clear the input buffer
            while (getchar() != '\n')
                ;
        }
    }

    return 0;
}