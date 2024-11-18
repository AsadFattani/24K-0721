#include <stdio.h>

#define MAX_TEMP 30.0

void checkTemperature(float temp);

int main() {
    float temp;
    printf("Enter temperature in Celsius (enter -1 to stop): ");
    while (scanf("%f", &temp) && temp != -1) {
        checkTemperature(temp);
        printf("Enter temperature in Celsius (enter -1 to stop): ");
    }
    return 0;
}

void checkTemperature(float temp) {
    static int exceedCount = 0;
    if (temp > MAX_TEMP) {
        exceedCount++;
        printf("Temperature %.2f exceeds the maximum allowable temperature of %.2f. Exceeded %d times.\n", temp, MAX_TEMP, exceedCount);
    } else {
        printf("Temperature %.2f is within the allowable limit.\n", temp);
    }
}