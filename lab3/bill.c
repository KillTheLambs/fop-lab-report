#include <stdio.h>

int main() {
    int calls, bill;

    printf("\033[1;34m********** TELEPHONE BILL CALCULATOR **********\033[0m\n");

    printf("\n\033[1mEnter the amount of calls made this month: \033[0m");
    scanf("%d", &calls);

    printf("\n\033[1;34m********************* BILL *********************\033[0m\n\n");

    if (calls <= 100) {
        bill = (calls * 0.80) + 250;
        printf("\tYour Expected bill is = %d\n\n", bill);
    } else if (calls <= 250) {
        bill = (calls * 1) + 350;
        printf("\tYour Expected bill is = %d\n\n", bill);
    } else {
        bill = (calls * 1.25) + 500;
        printf("\tYour Expected bill = %d\n\n", bill);
    }

    return 0;
}