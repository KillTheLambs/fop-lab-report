#include <stdio.h>

int main () {

    int var1,var2;
    
    printf("\033[1;36m\t**** VARIABLE COMPARISON PROGRAM ****\n\n\033[0m");
    
    printf("\033[1;33m\tPlease enter the first number : \033[0m");
    scanf("%d",&var1);

    printf("\033[1;33m\tPlease enter the second number : \033[0m");
        scanf("%d",&var2);
    
    printf("\n\033[1;34m\t--------------------------------------\n\n\033[0m");

    if (var1 == var2)
        printf("\033[1;32m\t%d == %d = TRUE\n\033[0m",var1,var2);
    else 
        printf("\033[1;31m\t%d == %d = FALSE\n\033[0m",var1,var2);

    if (var1 != var2)
        printf("\033[1;32m\t%d != %d = TRUE\n\033[0m",var1,var2);
    else 
        printf("\033[1;31m\t%d != %d = FALSE\n\033[0m",var1,var2);

    if (var1 > var2)
                printf("\033[1;32m\t%d > %d = TRUE\n\033[0m",var1,var2);
        else
                printf("\033[1;31m\t%d > %d = FALSE\n\033[0m",var1,var2);

    if (var1 < var2)
                printf("\033[1;32m\t%d < %d = TRUE\n\033[0m",var1,var2);
        else
                printf("\033[1;31m\t%d < %d = FALSE\n\033[0m",var1,var2);

    if (var1 >= var2)
                printf("\033[1;32m\t%d >= %d = TRUE\n\033[0m",var1,var2);
        else
                printf("\033[1;31m\t%d >= %d = FALSE\n\033[0m",var1,var2);

    if (var1 <= var2)
                printf("\033[1;32m\t%d <= %d = TRUE\n\033[0m",var1,var2);
        else
                printf("\033[1;31m\t%d <= %d = FALSE\n\033[0m",var1,var2);
    
    printf("\n\033[1;36m\t*********** THANKYOU FOR USING **********\n\033[0m");

    return 0;

}
