#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    int age;
    int score;
}student;

int main(){
    int numberOfStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    student *students = (student*)malloc(numberOfStudents * sizeof(student));

    for(int i = 0; i < numberOfStudents; i++){
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", students[i].name);
        do{
        printf("Enter the age of student %d: ", i+1);
        scanf("%d", &students[i].age);
        }while (students[i].age < 0);
        do{
        printf("Enter the score of student (between 1 and 100) %d: ", i+1);
        scanf("%d", &students[i].score);
        }while (students[i].score < 0 || students[i].score > 100);
    }

    for(int i = 0; i < numberOfStudents; i++){
        printf("Name: %s, Age: %d, Score: %d\n", students[i].name, students[i].age, students[i].score);
    }

    free(students);

    return 0;
}





