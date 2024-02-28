#include <stdio.h>

int main () {

    int value;

    printf("\t\033[1;36m**************** GOOD MORNING ***************\033[0m\n");
    // welcome statement //
    
    printf("\tPlease enter your value : ");
    scanf("%d",&value);
    // pair of scan and print statemnts to get value from user//
    
    printf("\n\t*************** INCREMENTATION ***************\n\n");

    printf("\tvalue after prefix increment = %d\n",++value);
    printf("\tvalue after postfix increment = %d\n",value++);
    printf("\tvalue after implmenting postfix increment = %d\n",value);
    // statements applying increment and displaying there values //

    printf("\n\t*************** DECREMENTATION ***************\n\n");

        printf("\tvalue after prefix decrement = %d\n",--value);
        printf("\tvalue after postfix decrement = %d\n",value--);
        printf("\tvalue after implmenting postfix decrement = %d\n",value);
    // statements applying decrement and displaying there values //
    
    printf("\n\t\033[1;36m*********** GOODBYE HAVE A NICE DAY ***********\033[0m\n");

    return 0;

}
