#include <stdio.h>

int main (){
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    while(age <= 0){
        printf("Enter the correct age: ");
        scanf("%d", &age);
    }

    if (age < 13){
        printf("You are a Child");
    }else if(age >= 13 && age < 20){
        printf("You are a Teenager");
    }else if(age >= 20 && age < 60 ){
        printf("You are an Adult");
    }else{
        printf("You are a Senior Citizen");
    }
    return 0;

}



