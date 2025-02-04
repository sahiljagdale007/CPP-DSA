//-------------------------------Programs to reverse arrays, structures and pointers-----------------------------

#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[50];
    int age;
};

int main() {
    int numStudents;

    // Ask for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    // Input student details
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    // Reverse the array of structures
    for (int i = 0; i < numStudents / 2; i++) {
        struct Student temp = students[i];
        students[i] = students[numStudents - i - 1];
        students[numStudents - i - 1] = temp;
    }

    // Display student details in reversed order
    printf("\nStudent Details in Reversed Order:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: Name: %s, Age: %d\n", i + 1, students[i].name, students[i].age);
    }

    return 0;
}
