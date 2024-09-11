#include <stdio.h>

int main() {
    int cost;
    float discountPercent, discountAmount, amountAfterDiscount;

    printf("Enter the cost of item: ");
    scanf("%d", &cost);

    // Determine discount percentage based on cost
    if (cost < 500) {
        printf("Ineligible for the discount!\n");
    } else if (cost >= 500 && cost < 2000) {
        discountPercent = 0.05;
    } else if (cost >= 2000 && cost < 4000) {
        discountPercent = 0.10;
    } else if (cost >= 4000 && cost < 6000) {
        discountPercent = 0.20;
    } else {
        discountPercent = 0.35;
    }

    if (cost >= 500) {
        discountAmount = cost * discountPercent;
        amountAfterDiscount = cost - discountAmount;

        // Display results
        printf("The Cost before discount: %d\n", cost);
        printf("The saved amount: %.2f\n", discountAmount);
        printf("The amount after discount: %.2f\n", amountAfterDiscount);
    }

    return 0;
}
