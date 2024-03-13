#include <stdio.h>

int main() {
    int i, number;
    int limit = 10;
    int product;

    printf("Welcome to the Multiplication Table Generator!\n\n");

    printf("Enter the number to print the multiplication table of: ");
    scanf("%d", &number);

    printf("Enter the limit upto which you want the table to be: ");
    scanf("%d", &limit);

    printf("\nMultiplication Table for %d up to %d:\n", number, limit);
    printf("----------------------------------------\n");

    for (i = 0; i <= limit; i++) {
        product = number * i;
        printf("\t\033[1;36m%d x %d = %d\033[0m\n", number, i, product);
    }

    printf("----------------------------------------\n");
    printf("Thank you for using the Multiplication Table Generator!\n\n");

    return 0;
}