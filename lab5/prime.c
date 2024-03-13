#include <stdio.h>

#define COLOR_RESET "\033[0m"
#define COLOR_GREEN "\033[0;32m"
#define COLOR_RED "\033[0;31m"

int main() {
    long number = 0;
    long i = 0;
    long divisor = 0;

    printf("\n\t-----------------------------\n");
    printf("\tWelcome to Prime Checker\n");
    printf("\t-----------------------------\n");

    printf("\nEnter a number to check if it's prime: ");
    scanf("%ld", &number);

    for (i = 2; i < number; i++) {
        if (number % i == 0) { 
            divisor++;
        }
    }

    printf("\n\t-----------------------------\n");
    if (divisor == 0) {
        printf("\t%s%ld is a prime number.%s\n", COLOR_GREEN, number, COLOR_RESET);
    } else {
        printf("\t%s%ld is not a prime number.%s\n", COLOR_RED, number, COLOR_RESET);
    }
    printf("\t-----------------------------\n");

    printf("\nGoodbye!\n");

    return 0;
}