#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Assuming input validation has already been done or is part of the interface
    // and the inputs are always within the defined limits.
    // Principal must be between 100 Rs. and 1,000,000 Rs.
    // Rate must be between 5% and 10%.
    // Time period must be between 1 and 10 years.
    
    // Display message to the user (assuming correct input)
    printf("Enter the principal amount (between 100 and 1,000,000 Rs): ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (between 5%% and 10%%): ");
    scanf("%f", &rate);

    printf("Enter the time period in years (between 1 and 10 years): ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;

    printf("The calculated interest is: %.2f Rs\n", interest);

    return 0;
}
