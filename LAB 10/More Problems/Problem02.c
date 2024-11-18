#include <stdio.h>
#include <math.h>

// Define a structure to represent a point in 2D space
typedef struct {
    double x;
    double y;
} Point;

// Function to calculate the distance between two points
double distance(Point p1, Point p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

// Function to check if a point lies within a specific rectangular boundary
int isWithinBoundary(Point p, Point topLeft, Point bottomRight) {
    return (p.x >= topLeft.x && p.x <= bottomRight.x && p.y >= topLeft.y && p.y <= bottomRight.y);
}

int main() {
    Point p1 = {0, 0};
    Point p2 = {3, 4};
    Point topLeft = {1, 1};
    Point bottomRight = {5, 5};

    printf("Distance between p1 and p2: %f\n", distance(p1, p2));
    printf("Is p1 within boundary: %d\n", isWithinBoundary(p1, topLeft, bottomRight));
    printf("Is p2 within boundary: %d\n", isWithinBoundary(p2, topLeft, bottomRight));

    return 0;
}