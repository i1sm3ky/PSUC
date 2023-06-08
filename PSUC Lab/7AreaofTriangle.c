#include <stdio.h>
#include <math.h>

void main() {
    float Side1, Side2, Side3, SemiPeri, Area;

    printf("Enter 3 sides of Triangle: ");
    scanf("%f, %f, %f", &Side1, &Side2, &Side3);

    SemiPeri = (Side1 + Side2 + Side3) / 2;
    Area = sqrt(SemiPeri * (SemiPeri - Side1) * (SemiPeri - Side2) * (SemiPeri - Side3));
    printf("Area of Triangle having sides %f, %f and %f = %f", Side1, Side2, Side3, Area);
}