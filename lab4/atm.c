#include <stdio.h>
#include <stdlib.h>

// ANSI escape sequences for colors
#define RESET   "\x1B[0m"
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define BLUE    "\x1B[34m"

// Function to check balance
void checkBalance(float balance) {
    printf("\tYour current balance is: " GREEN "$%.2f\n" RESET, balance);
}

// Function to deposit funds
void depositFunds(float *balance) {
    float amount;
    printf("\tEnter the amount to deposit: " BLUE "$");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf(RED "\tInvalid amount. Please enter a positive value.\n" RESET);
    } else {
        *balance += amount;
        printf("\tDeposit of " GREEN "$%.2f" RESET " successful. Your new balance is: " GREEN "$%.2f\n" RESET, amount, *balance);
    }
}

// Function to withdraw funds
void withdrawFunds(float *balance) {
    float amount;
    printf("\tEnter the amount to withdraw: " BLUE "$");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf(RED "\tInvalid amount. Please enter a positive value.\n" RESET);
    } else if (amount > *balance) {
        printf(RED "\tInsufficient funds. You cannot withdraw more than your current balance.\n" RESET);
    } else {
        *balance -= amount;
        printf("\tWithdrawal of " GREEN "$%.2f" RESET " successful. Your new balance is: " GREEN "$%.2f\n" RESET, amount, *balance);
    }
}

int main() {
    float balance = 0.0;
    int choice;

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

    while (1) {
        printf("\n\t--- " YELLOW "ATM Simulator" RESET " ---\n");
        printf("\t1. " BLUE "Check Balance\n" RESET);
        printf("\t2. " BLUE "Deposit Funds\n" RESET);
        printf("\t3. " BLUE "Withdraw Funds\n" RESET);
        printf("\t4. " BLUE "Quit\n" RESET);
        printf("\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                depositFunds(&balance);
                break;
            case 3:
                withdrawFunds(&balance);
                break;
            case 4:
                printf("\tThank you for using the ATM. " YELLOW "Goodbye!" RESET "\n");
                exit(0);
            default:
                printf(RED "\tInvalid choice. Please enter a valid option.\n" RESET);
        }
    }

    return 0;
}
