#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    char address[100];
} Person;

void updateAge(Person *person);

int main(){

    Person person1;
    // pointer to struct person
    Person *ptr = &person1;

    printf("Enter the name of the first person: ");
    scanf("%s", person1.name);
    printf("Enter the age of the first person: ");
    scanf("%d", &person1.age);
    getchar();
    printf("Enter the address of the first person: ");
    scanf("%s", person1.address);

    updateAge(ptr);

    // print the details of the person
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Address: %s\n", person1.address);

}

void updateAge(Person *person){
    printf("Enter the new age of the person: ");
    scanf("%d", &person->age);
    printf("The new age of the person is: %d\n", person->age);
}