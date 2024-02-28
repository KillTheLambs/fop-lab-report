#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    char* triangleType = (side1 == side2 && side2 == side3) ? "Equilateral triangle" :
                         (side1 == side2 || side2 == side3 || side1 == side3) ? "Isosceles triangle" :
                         "Scalene triangle";

    printf("%s\n", triangleType);

    return 0;

}