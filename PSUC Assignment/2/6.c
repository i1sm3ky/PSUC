#include <stdio.h>

void main() {
    // Declaring variables
    int s1, s2, s3, Valid;

    // Taking sides of triangle as input
    printf("Enter side of triangle(a, b, c): ");
    scanf("%d, %d, %d", &s1, &s2, &s3);

    // Checking if the triangle is valid or not
    Valid = ((s1 + s2) > s3) ? (((s2 + s3) > s1) ? ((s1 + s3) > s2) : 0) : 0;

    // If valid, determine and print type of triangle
    if (Valid) {
        if ((s1 != s2) && (s2 != s3) && (s1 != s3)) printf("Valid Triangle : Scalene\n");
        if (((s1 == s2) && (s2 != s3)) || ((s2 == s3) && (s2 != s1)) || ((s1 == s3) && (s1 != s2))) printf("Valid Triangle : Isosceles\n");
        if ((s1 == s2) && (s2 == s3)) printf("Valid Triangle : Equilateral\n");
    } else {
        printf("Not a Valid Triangle\n");
    };
}