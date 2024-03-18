#include <stdio.h>
int main()
{
    int rows = 0;

    for(int i = rows; i<=10; i++)
    {
        for(rows = 1; rows <= i; rows++)
        {
            printf("%d", rows);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}