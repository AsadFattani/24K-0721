#include <stdio.h>
int main() {
    int salary;
    float taxrate, tax, newsalary; 
    

    printf("Enter your salary: ");
    scanf("%d", &salary);
    printf("Enter tax rate: ");
    scanf("%f", &taxrate);

    tax = salary * (taxrate/100);
    newsalary = salary - tax;

    printf("The tax is %.2f\n", tax);
    printf("The New Salary is %.2f\n", newsalary);
}