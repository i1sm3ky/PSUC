#include <stdio.h>
#include <math.h>

void main() {
    int Num, TempNum, Len = 0, Sum = 0;

    printf("Enter your number: ");
    scanf("%d", &Num);
    TempNum = Num;

    while (TempNum != 0) {
        Len++;
        TempNum /= 10;
    };
    TempNum = Num;

    for (int i = 0; i < Len; i++) {
        Sum += pow(TempNum % 10, Len);
        TempNum /= 10;
    };

    Num == Sum ? printf("Your number is an Armstrong number.\n") : printf("Your number is not an Armstrong number.\n");
}