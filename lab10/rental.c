#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// car rental app

typedef struct {
    char name[50];
    char model[50];
    int year;
    int price;
    int mileage;
    bool available;
} Car;

void PrintCarDetails(Car car);
void RentCar(Car* car, bool* rented);

int main() {
    bool rented = false;
    
    Car cars[] = {
        {"Toyota Corolla", "Corolla", 2023, 25000, 10000, true},
        {"Honda Civic", "Civic", 2022, 20000, 15000, true},
        {"Ford Mustang", "Mustang", 2021, 30000, 5000, false}
    };
    
    int numCars = sizeof(cars) / sizeof(cars[0]);

    while(!rented) {
        printf("\033[1;36mWelcome to the Car Rental App!\033[0m\n");
        printf("\033[1;33mThese Are The Cars Listed: \033[0m\n");
        for(int i = 0; i < numCars; i++) {
            printf("\033[1;32m%d. %s\033[0m\n", i + 1, cars[i].name);
        }
        printf("\033[1;33mPlease Pick The Car You Would Like To Rent: \033[0m\n");
        
        int choice;
        scanf("%d", &choice);
        
        if (choice >= 1 && choice <= numCars) {
            printf("\033[1;32mYou have chosen the %s!\033[0m\n", cars[choice - 1].name);
            PrintCarDetails(cars[choice - 1]);
            RentCar(&cars[choice - 1], &rented);
        } else {
            printf("\033[1;31mInvalid choice!\033[0m\n");
        }
        printf("========================================\n");
    }
    return 0;
}

void PrintCarDetails(Car car) {
    printf("\033[1;33mHere are the details of your car: \033[0m\n");
    printf("Car Name: %s\n", car.name);
    printf("Car Model: %s\n", car.model);
    printf("Year: %d\n", car.year);
    printf("Price: $%d\n", car.price);
    printf("Mileage: %d\n", car.mileage);
    printf("Status: %s\n", car.available ? "Available" : "Not Available");
}

void RentCar(Car* car, bool* rented) {
    if(car->available) {
        printf("\033[1;32mYou have rented the %s!\033[0m\n", car->name);
        car->available = false;
        printf("\033[1;32mThank you for renting the %s!\033[0m\n", car->name);
        *rented = true;
    } else {
        printf("\033[1;31mSorry, the %s is not available!\033[0m\n", car->name);
        *rented = false;
    }
}