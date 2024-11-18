#include <stdio.h>
#include <string.h>

struct dealershipCars {
    char carMake[50];
    char carModel[50];
    int carYear;
    int carPrice;
    int carMileage;
};

void addNewCar(struct dealershipCars *car) {
    printf("Enter car make: ");
    scanf(" %[^\n]s", car->carMake);
    printf("Enter car model: ");
    scanf(" %[^\n]s", car->carModel);
    do {
        printf("Enter car year: ");
        scanf("%d", &car->carYear);
    } while (car->carYear < 1886 || car->carYear > 2024);
    printf("Enter car price: ");
    scanf("%d", &car->carPrice);
    printf("Enter car mileage: ");
    scanf("%d", &car->carMileage);
}

void displayCarDetails(struct dealershipCars car) {
    printf("\nMake: %s\n", car.carMake);
    printf("Model: %s\n", car.carModel);
    printf("Year: %d\n", car.carYear);
    printf("Price: %d\n", car.carPrice);
    printf("Mileage: %d\n", car.carMileage);
}

void displayAllCars(struct dealershipCars cars[], int size) {
    for (int i = 0; i < size; i++) {
        displayCarDetails(cars[i]);
    }
}

void searchCarByMake(struct dealershipCars *car, char *make) {
    if (strcmp(car->carMake, make) == 0) {
        displayCarDetails(*car);
    }
}

void searchCarByModel(struct dealershipCars *car, char *model) {
    if (strcmp(car->carModel, model) == 0) {
        displayCarDetails(*car);
    }
}

int main() {
    struct dealershipCars cars[100] = {
        {"Toyota", "Camry", 2015, 15000, 50000},
        {"Honda", "Civic", 2018, 18000, 30000},
        {"Ford", "Mustang", 2020, 35000, 10000}
    };
    int choice, size = 3;

    do {
        printf("\nMenu:\n");
        printf("1. Add a new car\n");
        printf("2. Display car details\n");
        printf("3. Search car by make\n");
        printf("4. Search car by model\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addNewCar(&cars[size]);
                size++;
                break;
            case 2:
                displayAllCars(cars, size);
                break;
            case 3: {
                char make[50];
                printf("Enter the make to search: ");
                scanf(" %[^\n]s", make);
                int found = 0;
                for (int i = 0; i < size; i++) {
                    if (strcmp(cars[i].carMake, make) == 0) {
                        searchCarByMake(&cars[i], make);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("No car found with the given make.\n");
                }
                break;
            }
            case 4: {
                char model[50];
                printf("Enter the model to search: ");
                scanf(" %[^\n]s", model);
                int found = 0;
                for (int i = 0; i < size; i++) {
                    if (strcmp(cars[i].carModel, model) == 0) {
                        searchCarByModel(&cars[i], model);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("No car found with the given model.\n");
                }
                break;
            }
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
