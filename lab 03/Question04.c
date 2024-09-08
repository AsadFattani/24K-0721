#include <stdio.h>

int main() {
    float fuelAverage, distance = 1207;
    float forwardPricePerLitre = 118.0, returnPricePerLitre = 123.0;
    float fuelConsumed, forwardFuelCost, returnFuelCost, totalFuelCost;

    do {
        printf("Enter the car's fuel average (km per litre): ");
        scanf("%f", &fuelAverage);
        if (fuelAverage <= 0) {
            printf("Please enter a positive value for the fuel average.\n");
        }
    } while (fuelAverage <= 0);

    fuelConsumed = distance / fuelAverage;

    forwardFuelCost = fuelConsumed * forwardPricePerLitre;
    returnFuelCost = fuelConsumed * returnPricePerLitre;
    totalFuelCost = forwardFuelCost + returnFuelCost;

    printf("Fuel consumed for the entire trip: %.2f litres\n", fuelConsumed * 2);
    printf("Fuel cost for the forward trip: %.2f\n", forwardFuelCost);
    printf("Fuel cost for the return trip: %.2f\n", returnFuelCost);
    printf("Total fuel cost for the entire trip: %.2f\n", totalFuelCost);

    return 0;
}

