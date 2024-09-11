#include <stdio.h>

int main(){
    int cost, discount;
    printf("Enter the cost of item: ");
    scanf("%d", &cost);
    if (cost < 500){
        printf("Ineligibe for the discount!");
    } else if (cost >= 500 && cost < 2000){
        discount = cost * 0.05;
        printf("The Cost before discount: %d\n", cost);
        printf("The saved amount: %d\n ", discount);
        printf("The amount after discount: %d\n", (cost - discount));
    } else if (cost >= 2000 && cost < 4000){
        discount = cost * 0.1;
        printf("The Cost before discount: %d\n", cost);
        printf("The saved amount: %d\n ", discount);
        printf("The amount after discount: %d\n", (cost - discount));
    } else if (cost >= 4000 && cost < 6000){
        discount = cost * 0.2;
        printf("The Cost before discount: %d\n", cost);
        printf("The saved amount: %d\n ", discount);
        printf("The amount after discount: %d\n", (cost - discount));
    } else {
        discount = cost * 0.35;
        printf("The Cost before discount: %d\n", cost);
        printf("The saved amount: %d\n ", discount);
        printf("The amount after discount: %d\n", (cost - discount));
    }
}

