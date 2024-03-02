#include <stdio.h>

// function to print colored text
void printColorText(char* text, char* color) {
    printf("%s%s%s", color, text, "\033[0m");
}

int main() {
    int side1, side2, side3;

    // Welcome message
    printColorText("\nWelcome to the Triangle Type Program!\n", "\033[1;32m");

    printf("\nEnter the length of side 1: ");
    scanf("%d", &side1);

    printf("\nEnter the length of side 2: ");
    scanf("%d", &side2);

    printf("\nEnter the length of side 3: ");
    scanf("%d", &side3);

    char* triangleType = (side1 == side2 && side2 == side3) ? "\nEquilateral triangle" :
                         (side1 == side2 || side2 == side3 || side1 == side3) ? "\nIsosceles triangle" :
                         "\nScalene triangle";

    printf("\nYour Triangle type is: \n");
    printColorText(triangleType, "\033[1;34m");

    printColorText("\nThank you for using the Triangle Program!\n", "\033[1;32m");
    printf("\n");

    return 0;
}