#include <stdio.h>

int main() {
    while (1) {
        int num;
        
        printf("Enter a number: ");
        scanf("%d", &num);
        
        if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0) {
            printf("%d is not a prime number.\n", num);
        } else {
            printf("%d is a prime number.\n", num);
        }

        char input;
        printf("Enter Any Letter To Repeat // Press'E' to exit: ");
        scanf(" %c", &input);
        
        if (input == 'E') {
            break;
        }
    }

    return 0;
    }
