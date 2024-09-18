#include <stdio.h>

int main() {
    float attendance, assignmentScore, examScore, finalGrade;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    if (attendance < 80) {
        printf("Failed due to insufficient attendance.\n");
    } else {
        printf("Enter assignment score (out of 100): ");
        scanf("%f", &assignmentScore);

        printf("Enter exam score (out of 100): ");
        scanf("%f", &examScore);

        finalGrade = (assignmentScore * 0.20) + (examScore * 0.80);

        if (finalGrade >= 90) {
            printf("Final Grade: A\n");
        } else if (finalGrade >= 80) {
            printf("Final Grade: B\n");
        } else if (finalGrade >= 70) {
            printf("Final Grade: C\n");
        } else if (finalGrade >= 60) {
            printf("Final Grade: D\n");
        } else {
            printf("Final Grade: F\n");
        }
    }

    return 0;
}
