#include <stdio.h>

int main()
{

	int var1, var2, sum, sub, multiply, divide;

	printf("\t\033[36m**** BASIC ARITHMETIC FUNCTIONS ****\n\n\033[0m");
	
	printf("\tPlease Enter the First value : ");
	scanf("%d", &var1);

	printf("\tPlease Enter the Second value : ");
	scanf("%d", &var2);

	sum = var1 + var2;
	sub = var1 - var2;
	multiply = var1 * var2;
	divide = var1 / var2;
	printf("\n\t------------------------------------\n\n");

	printf("\tSUM OF VALUES ENTERED = %d\n", sum);
	printf("\tDIFFERENCE OF VALUES ENTERED = %d\n", sub);
	printf("\tPRODUCT OF VALUES ENTERED = %d\n", multiply);
	printf("\tQUOTIENT OF VALUES ENTERED = %d\n", divide);

	printf("\n\t\033[36m******** THANKYOU FOR USING ********\033[0m\n");

	return 0;
}