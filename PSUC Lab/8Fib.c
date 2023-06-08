#include <stdio.h>

void main() {
    int Num1 = 0, Num2 = 1, IterNum;

    printf("Enter Number of Iterations you want: ");
    scanf("%d", &IterNum);
    IterNum -= 3;

    printf("%d %d ", Num1, Num2);

    for (int Num = 0; Num <= IterNum; Num++) {
        Num2 += Num1;
        Num1 = Num2 - Num1;
        printf("%d ", Num2);
    };
}