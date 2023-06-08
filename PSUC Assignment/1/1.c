#include <stdio.h>

void main() {
    double Principal;
    float Rate;
    int Duration;
    scanf("%lf %f %d", &Principal, &Rate, &Duration);
    double Interest = Principal * Rate * Duration;
    printf("Principal = %lf\nRate = %f\nDuration = %d\nInterest = %lf", Principal, Rate, Duration, Interest);

    int a = 10 , b = 8 , c = 6;
    int x = a++ * b-- + c++;
    printf("\n x = %d \na =%d \n b = %d \n c =%d\n ",x, a, b, c);
    int z = (a ==b) + (++b);
    printf("\n z = %d \n",z);
}