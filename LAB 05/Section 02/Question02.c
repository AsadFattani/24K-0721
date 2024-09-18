#include <stdio.h>

int main(){
    int age;
    char status;

    do{
        printf("Enter your age : ");
        scanf("%d", &age);
    }while(age <= 0);

    do{
        printf("Enter your citizenship status(A: approved | U: Unapproved): ");
        scanf(" %c", &status);
    }while(status != 'A' && status != 'U');

    if (age >= 18 && status == 'A'){
        printf("Eligible to vote");
    }else{
        printf("Ineligible to vote");
    }
}

