#include <stdio.h>

void main() {
    int Num, TempNum, Sum = 0;

    printf("Enter Your Number: ");
    scanf("%d", &Num);

    TempNum = Num;

    while (Num != 0) {
        Sum += (Num % 10);
        Num /= 10;
    }

    printf("Sum of digits of %d = %d\n", TempNum, Sum);
}