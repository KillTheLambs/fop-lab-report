#include <stdio.h>

int main()
{
    int i = 0, j = 0, k = 0;

    int one_d_array[5] = {1, 2, 3, 4, 5};
    int two_d_array[3][3] = {{1, 2, 3}, 
    {4, 5, 6}, 
    {7, 8, 9}};
    int three_d_array[2][2][3] = {
        {{1, 2, 3}, {4, 5, 6}}, 
        {{7, 8, 9}, {10, 11, 12}}
    };

    printf("1D Array: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", one_d_array[i]);
    }

    printf("\n2D Array: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", two_d_array[i][j]);
        }
    }

    printf("\n3D Array: ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d ", three_d_array[i][j][k]);
            }
        }
    }
}