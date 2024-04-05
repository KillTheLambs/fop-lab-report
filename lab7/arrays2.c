#include <stdio.h>

int main()
{
    int arr[10];
    int max;
    int i;

    printf("Enter 10 numbers: \n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The maximum number is: %d\n", max);
    return 0;
}