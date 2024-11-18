#include <stdio.h>

struct flightInfo {
    char flightNumber[6];
    char departureCity[20];
    char destinationCity[20];
    char flighDate[10];
    int availableSeats;
};

// function to book a seat
void bookSeat(struct flightInfo *flight) {
    if (flight->availableSeats > 0) {
        flight->availableSeats--;
        printf("Seat booked successfully!\n");
    } else {
        printf("No available seats!\n");
    }
}

// functiom to print the flight details
void displayFlightDetails(struct flightInfo flight) {
    printf("\nFlight number: %s\n", flight.flightNumber);
    printf("Departure city: %s\n", flight.departureCity);
    printf("Destination city: %s\n", flight.destinationCity);
    printf("Flight date: %s\n", flight.flighDate);
    printf("Available seats: %d\n", flight.availableSeats);
}

int main(){
    struct flightInfo flight1 = {
        "AB123",
        "Karachi",
        "Islamabad",
        "2024-11-25",
        49
    };
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Book a seat\n");
        printf("2. Display flight details\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookSeat(&flight1);
                break;
            case 2:
                displayFlightDetails(flight1);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}
