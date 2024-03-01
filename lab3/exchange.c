#include <stdio.h>

int main() {
    int a, b, c;

    printf("\033[1;34m***** VARIABLES VALUE EXCHANGER *****\033[0m\n");

    printf("\033[1;32mEnter Value of 'a' : \033[0m");
    scanf("%d", &a);

    printf("\033[1;32mEnter Value of 'b' : \033[0m");
    scanf("%d", &b);

    printf("\033[1;34m--------------------------------------\033[0m\n");

    printf("\n\033[1;36mValue of a = %d\033[0m", a);
    printf("\n\033[1;36mValue of b = %d\033[0m\n\n", b);

    c = a;
    a = b;
    b = c;

    printf("\033[1;34m--------------------------------------\033[0m\n");

    printf("\n\033[1;36mValue of a = %d\033[0m", a);
    printf("\n\033[1;36mValue of b = %d\033[0m\n", b);
    printf("\n");

    return 0;
}