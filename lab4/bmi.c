#include <stdio.h>

// Define color escape sequences
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"

int main()
{
    float weight, height, bmi;

    printf("---------------------------------------\n");
    printf("Welcome to the BMI Calculator!\n");
    printf("---------------------------------------\n");

    printf("Enter your weight in kilograms (kg): ");
    scanf("%f", &weight);

    printf("Enter your height in meters (m): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("\nYour BMI is: %.2f\n", bmi);
    printf("---------------------------------------\n");

    if (bmi < 18.5)
    {
        printf(RED "You are underweight.\n" RESET);
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        printf(GREEN "You are normal.\n" RESET);
    }
    else if (bmi >= 25 && bmi < 30)
    {
        printf(YELLOW "You are overweight.\n" RESET);
    }
    else
    {
        printf(RED "You are obese.\n" RESET);
    }

    printf("---------------------------------------\n");
    printf("\nThank you for using the BMI Calculator!\n");
    printf("---------------------------------------\n");

    return 0;
}