#include <ctype.h>
#include <stdio.h>

int count = 0;
char diagnosis[256];
char note[256] =
        "Thank you for using Virtual Diagnoser. Made with 🤍 by Luqman.";

int main() {
    FILE *file = fopen("diagnosis.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n\033[1;36m********* WELCOME TO VIRTUAL DIAGNOSER "
                 "*********\033[0m\n");
    printf("---------------------------------------------------------\n");
    printf("Answer the following questions about your symptoms.\n");
    printf("\033[1;33mENTER 1 FOR YES AND 0 FOR NO.\033[0m\n");
    printf("---------------------------------------------------------\n");

    int hasTravelled;
    do {
        printf("Have You Visited A COVID-19 Infested Area Lately? (1 for Yes, 0 "
                     "for No): ");
        scanf("%d", &hasTravelled);
    } while (hasTravelled != 1 && hasTravelled != 0);
    if (hasTravelled == 1)
        count++;

    int hasHeadache;
    do {
        printf("Do You Have Headache? (1 for Yes, 0 for No): ");
        scanf("%d", &hasHeadache);
    } while (hasHeadache != 1 && hasHeadache != 0);
    if (hasHeadache == 1)
        count++;

    int feelsTired;
    do {
        printf("Do You Feel Tired? (1 for Yes, 0 for No): ");
        scanf("%d", &feelsTired);
    } while (feelsTired != 1 && feelsTired != 0);
    if (feelsTired == 1)
        count++;

    int hasPainBehindEyes;
    do {
        printf("Do You Have Pain Behind Your Eyes? (1 for Yes, 0 for No): ");
        scanf("%d", &hasPainBehindEyes);
    } while (hasPainBehindEyes != 1 && hasPainBehindEyes != 0);
    if (hasPainBehindEyes == 1)
        count++;

    int hasDifficultyBreathing;
    do {
        printf("Do You Have Difficulty Breathing? (1 for Yes, 0 for No): ");
        scanf("%d", &hasDifficultyBreathing);
    } while (hasDifficultyBreathing != 1 && hasDifficultyBreathing != 0);
    if (hasDifficultyBreathing == 1)
        count++;

    printf("---------------------------------------------------------\n");

    // diagnosis logic

    printf("Number of statements answered yes %d/5\n", count);

    if (hasTravelled == 1) {
        sprintf(diagnosis, "You are at high risk of COVID-19. Please consult a doctor.");
    } else if (count <= 2) {
        sprintf(diagnosis, "You are fine, just get some rest.");
    } else if (count <= 4) {
        sprintf(diagnosis, "You might have a fever. Consider consulting a doctor for further evaluation.");
    } else {
        sprintf(diagnosis, "You are completely fine.");
    }

    printf("\033[32m%s\033[0m\n", diagnosis);
    fprintf(file, "%s\n", diagnosis);

    printf("Your diagnosis has been saved to diagnosis.txt\n");
    fprintf(file, "%s\n", note);

    fclose(file);

    printf("---------------------------------------------------------\n");
    printf("\033[1;36m********* THANK YOU FOR USING VIRTUAL DIAGSNOSER *********\033[0m\n");
    printf("---------------------------------------------------------\n");
    printf("\033[1;36m***************** Made with 🤍 by Luqman *****************\033[0m\n");

    // Infinite loop until user enters 'e' or 'E'
    char exitChar;
    do {
        printf("Enter 'E' to exit or any other key to restart: ");
        scanf(" %c", &exitChar);
        if (tolower(exitChar) != 'e') {
            count = 0;
            rewind(file);
            printf("\n\033[1;36m********* WELCOME TO VIRTUAL DIAGNOSER "
                     "*********\033[0m\n");
            printf("---------------------------------------------------------\n");
            printf("Answer the following questions about your symptoms.\n");
            printf("\033[1;33mENTER 1 FOR YES AND 0 FOR NO.\033[0m\n");
            printf("---------------------------------------------------------\n");

            do {
                printf("Have You Visited A COVID-19 Infested Area Lately? (1 for Yes, 0 "
                             "for No): ");
                scanf("%d", &hasTravelled);
            } while (hasTravelled != 1 && hasTravelled != 0);
            if (hasTravelled == 1)
                count++;

            do {
                printf("Do You Have Headache? (1 for Yes, 0 for No): ");
                scanf("%d", &hasHeadache);
            } while (hasHeadache != 1 && hasHeadache != 0);
            if (hasHeadache == 1)
                count++;

            do {
                printf("Do You Feel Tired? (1 for Yes, 0 for No): ");
                scanf("%d", &feelsTired);
            } while (feelsTired != 1 && feelsTired != 0);
            if (feelsTired == 1)
                count++;

            do {
                printf("Do You Have Pain Behind Your Eyes? (1 for Yes, 0 for No): ");
                scanf("%d", &hasPainBehindEyes);
            } while (hasPainBehindEyes != 1 && hasPainBehindEyes != 0);
            if (hasPainBehindEyes == 1)
                count++;

            do {
                printf("Do You Have Difficulty Breathing? (1 for Yes, 0 for No): ");
                scanf("%d", &hasDifficultyBreathing);
            } while (hasDifficultyBreathing != 1 && hasDifficultyBreathing != 0);
            if (hasDifficultyBreathing == 1)
                count++;

            printf("---------------------------------------------------------\n");

            // diagnosis logic

            printf("Number of statements answered yes %d/5\n", count);

            if (hasTravelled == 1) {
                sprintf(diagnosis, "You are at high risk of COVID-19. Please consult a doctor.");
            } else if (count <= 2) {
                sprintf(diagnosis, "You are fine, just get some rest.");
            } else if (count <= 4) {
                sprintf(diagnosis, "You might have a fever. Consider consulting a doctor for further evaluation.");
            } else {
                sprintf(diagnosis, "You are completely fine.");
            }

            printf("\033[32m%s\033[0m\n", diagnosis);
            fprintf(file, "%s\n", diagnosis);

            printf("Your diagnosis has been saved to diagnosis.txt\n");
            fprintf(file, "%s\n", note);

            fclose(file);

            printf("---------------------------------------------------------\n");
            printf("\033[1;36m********* THANK YOU FOR USING VIRTUAL DIAGSNOSER *********\033[0m\n");
            printf("---------------------------------------------------------\n");
            printf("\033[1;36m***************** Made with 🤍 by Luqman *****************\033[0m\n");
        }
    } while (tolower(exitChar) != 'e');

    return 0;
}