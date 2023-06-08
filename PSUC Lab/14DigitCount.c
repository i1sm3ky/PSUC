#include <stdio.h>

void main() {
    int Num, TempNum, Count = 0;

    printf("Enter Your Number: ");
    scanf("%d", &Num);

    TempNum = Num;

    while (Num != 0) {
        Count++;
        Num /= 10;
    }

    printf("Number of digits in %d = %d\n", TempNum, Count);
}