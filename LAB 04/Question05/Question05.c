#include <stdio.h>

int main() {
    int customerID, units;
    float charge, totalBill, surcharge = 0.0;
    char name[50]; 

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name (single word): ");
    scanf("%s", name);  
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    if (units <= 199) {
        charge = 16.20;
    } else if (units >= 200 && units < 300) {
        charge = 20.10;
    } else if (units >= 300 && units < 500) {
        charge = 27.10;
    } else {
        charge = 35.90;
    }

    totalBill = units * charge;

    if (totalBill > 18000) {
        surcharge = totalBill * 0.15;
    }

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Amount Charged @ Rs. %.2f per unit: %.0f\n", charge, totalBill);
    
    if (surcharge > 0) {
        printf("Surcharge Amount: %.2f\n", surcharge);
    }
    
    printf("Net Amount Paid by the Customer: %.2f\n", totalBill + surcharge);

    return 0;
}
