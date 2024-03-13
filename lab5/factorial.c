#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Validate the input
    if (num < 0) {
        printf("Error: Invalid input. Please enter a positive integer.\n");
        return 0;
    }

    // Calculate the factorial
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }

    // Display the result
    printf("The factorial of %d is %llu\n", num, factorial);

    return 0;
}
