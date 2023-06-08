#include <stdio.h>
#include <math.h>

void main() {
    // Declaring variables
    int N, TempNum, Len = 0, Sum = 0;

    // Taking input
    printf("Enter your number: ");
    scanf("%d", &N);
    TempNum = N;

    // Finding length of the given number
    while (TempNum != 0) {
        Len++;
        TempNum /= 10;
    };
    TempNum = N;

    // Finding if the number is a armstrong number or not
    for (int i = 0; i < Len; i++) {
        Sum += pow(TempNum % 10, Len);
        TempNum /= 10;
    };

    // Printing the result
    N == Sum ? printf("Your number is an Armstrong number.\n") : printf("Your number is not an Armstrong number.\n");
}