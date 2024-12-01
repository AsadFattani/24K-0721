#include <stdio.h>   // Include standard input-output library
#include <stdlib.h>  // Include standard library for memory allocation
#include <string.h>  // Include string library for string manipulation

// Define a structure for a student
typedef struct {
    int rollNumber;   // Student's roll number
    char name[50];    // Student's name (up to 49 characters + null terminator)
    float marks;      // Student's marks
} Student;

int main() {
    int numStudents;   // Variable to store the number of students
    Student *students; // Pointer to dynamically allocate memory for students

    // Ask the user how many students to input
    printf("Enter the number of students: ");
    scanf("%d", &numStudents); // Read the number of students from user input

    // Dynamically allocate memory for the students
    students = (Student *)malloc(numStudents * sizeof(Student)); // Allocate memory for 'numStudents' Student structures

    // Input details for each student
    for (int i = 0; i < numStudents; i++) { // Loop through each student
        printf("\nEnter details for student %d:\n", i + 1); // Prompt for student details

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber); // Read roll number
        getchar(); // Clear newline character left by scanf

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin); // Read name
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline character from name

        printf("Marks: ");
        scanf("%f", &students[i].marks); // Read marks
    }

    // Display the entered details
    printf("\nStudent Details:\n");
    for (int i = 0; i < numStudents; i++) { // Loop through each student
        printf("Student %d:\n", i + 1); // Print student number
        printf("Roll Number: %d\n", students[i].rollNumber); // Print roll number
        printf("Name: %s\n", students[i].name); // Print name
        printf("Marks: %.2f\n", students[i].marks); // Print marks
    }

    // Free the allocated memory
    free(students); // Deallocate memory

    return 0; // Return success
}
