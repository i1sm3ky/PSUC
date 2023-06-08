#include <stdio.h>

void main() {
    int Length, Breadth, Area;

    printf("Enter Length, Breadth: ");
    scanf("%d, %d", &Length, &Breadth);

    Area = Length * Breadth;
    printf("Area of Rectangle having Length: %d, Breadth: %d = %d", Length, Breadth, Area);
}