#include <stdio.h>

#define METERS_TO_KILOMETERS 0.001

void conversionFunction() {
    static int callCount = 0;
    callCount++;
    printf("The function has been called %d times.\n", callCount);
}

int main() {
    double meters = 1000.0;
    double kilometers = meters * METERS_TO_KILOMETERS;
    printf("%.2f meters is equal to %.2f kilometers.\n", meters, kilometers);

    // Call the function multiple times to demonstrate the static variable
    conversionFunction();
    conversionFunction();
    conversionFunction();

    return 0;
}