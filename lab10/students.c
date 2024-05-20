#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int ID;
    char name[100];
    float marks;
} Student;

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    Student* students = (Student*) malloc(numStudents * sizeof(Student));

    for(int i = 0; i < numStudents; i++) {
        printf("Enter details for student %d\n", i+1);
        printf("ID: ");
        scanf("%d", &students[i].ID);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Details:\n");
    for(int i = 0; i < numStudents; i++) {
        printf("Student %d\n", i+1);
        printf("ID: %d\n", students[i].ID);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students);
    return 0;
}