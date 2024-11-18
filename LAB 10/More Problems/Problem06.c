#include <stdio.h>
#include <string.h>


struct travelPackages {
    char packageName[50];
    char destination[50];
    int duration;
    int cost;
    int availableSeats;
};

void bookPackage(struct travelPackages *package){
    if(package->availableSeats > 0){
        package->availableSeats--;
        printf("Package booked successfully.\n");
    } else {
        printf("Package is full. Please try again later.\n");
    }
}

void displayAvailablePackages(struct travelPackages packages[], int size){
    for(int i = 0; i < size; i++){
        printf("\nPackage Name: %s\n", packages[i].packageName);
        printf("Destination: %s\n", packages[i].destination);
        printf("Duration: %d days\n", packages[i].duration);
        printf("Cost: $%d\n", packages[i].cost);
        printf("Available Seats: %d\n", packages[i].availableSeats);
    }
    printf("\n");
}

int main(){
    struct travelPackages packages[100] = {
        {"Package1", "Paris", 7, 2000, 10},
        {"Package2", "London", 5, 1500, 15},
        {"Package3", "New York", 10, 3000, 5}
    };
    int choice, size = 3;

    do {
        printf("1. Book a package\n");
        printf("2. Display available packages\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                char packageName[50];
                printf("Enter the package name to book: ");
                scanf(" %[^\n]s", packageName);
                int found = 0;
                for (int i = 0; i < size; i++) {
                    if (strcmp(packages[i].packageName, packageName) == 0) {
                        bookPackage(&packages[i]);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("No package found with the given name.\n");
                }
                break;
            }
            case 2:
                displayAvailablePackages(packages, size);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}

