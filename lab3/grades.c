#include <stdio.h>

int main() {
    int marks;

    printf("\033[1;36m**** WELCOME TO GRADE CALCULATOR ****\033[0m\n\n");
    printf("\033[1;33mPlease enter your marks: \033[0m");
    scanf("%d", &marks);

    if (marks > 100 || marks < 0) {
        printf("\033[1;31mPlease re-enter your marks: \033[0m");
        scanf("%d", &marks);
    }

    printf("\n\033[1;35m************** RESULT ***************\033[0m\n");

    if (marks < 50)
        printf("\033[1;31mGRADE = F\033[0m\n");
    else if (marks <= 69)
        printf("\033[1;33mGRADE = D\033[0m\n");
    else if (marks <= 79)
        printf("\033[1;32mGRADE = C\033[0m\n");
    else if (marks <= 89)
        printf("\033[1;34mGRADE = B\033[0m\n");
    else
        printf("\033[1;36mGRADE = A\033[0m\n");

    return 0;
}
