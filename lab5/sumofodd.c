#include <stdio.h>

#define RESET   "\x1B[0m"
#define RED     "\x1B[31m"
#define GREEN   "\x1B[32m"
#define YELLOW  "\x1B[33m"

int main(){

    int start, finish;
    printf("Welcome to the sum of odd numbers program\n");

    // Input validation loop
    do {
        if (start > finish){
            printf(RED "The start point should not be greater than the finish point\n" RESET);
        }
        printf("Please enter the start point of the range: ");
        scanf("%d", &start);
        printf("Please enter the finish point of the range: ");
        scanf("%d", &finish);
    } while (start > finish);

    int sum = 0;

    // Calculate the sum of odd numbers
    for (int i = start; i <= finish; i++){
        if (i % 2 != 0){
            sum += i;
        }
    }

    printf("\n-----------------------------------------------\n");
    printf(GREEN "The sum of odd numbers between %d and %d is %d\n" RESET, start, finish, sum);
    printf("-----------------------------------------------\n");

}