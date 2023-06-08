#include <stdio.h>

void main() {
    float Radius, Area;

    printf("Enter Radius of the circle: ");
    scanf("%f", &Radius);

    Area = (22 * Radius * Radius) / 7;
    printf("Area of Circle having Radius: %f = %f", Radius, Area);
}