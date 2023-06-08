#include <stdio.h>

void main() {
    int Num1, Num2, Sum, Diff, Prod, Div;

    printf("Enter 2 Numbers: ");
    scanf("%d %d", &Num1, &Num2);

    Sum = Num1 + Num2;
    Diff = Num1 - Num2;
    Prod = Num1 * Num2;
    Div = Num1 / Num2;

    printf("Sum of %d and %d = %d\n", Num1, Num2, Sum);
    printf("Diff of %d and %d = %d\n", Num1, Num2, Diff);
    printf("Prod of %d and %d = %d\n", Num1, Num2, Prod);
    printf("Div of %d and %d = %d\n", Num1, Num2, Div);
}