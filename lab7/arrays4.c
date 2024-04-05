#include <stdio.h>

#define ARRAY_SIZE 5

int main() {
    int array[ARRAY_SIZE] = {10, 20, 30, 40, 50};
    int number, index = -1;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &number);

        for (int i = 0; i < ARRAY_SIZE; i++) {
            if (array[i] == number) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            printf("The number %d is found at index %d\n", number, index);
        } else {
            printf("The number %d is not present in the array\n", number);
        }

        printf("Do you want to restart the program? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');

    return 0;
}