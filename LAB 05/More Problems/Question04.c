#include <stdio.h>

int main(){
    int age, income, credit_score;

    do{
        printf("Enter your age: ");
        scanf("%d", &age);
    }while(age <= 0);

    do{
        printf("Enter your income: ");
        scanf("%d", &income);
    }while(income < 0);
    
    do{
        printf("Enter your credit_score: ");
        scanf("%d", &credit_score);
    }while(credit_score < 300);

    if (age >= 18 && income >= 25000 && credit_score >= 700) {
        printf("You are eligible for a loan.\n");
    } else {
        printf("You are not eligible for a loan.\n");
    }

    return 0;

}



