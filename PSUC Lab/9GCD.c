#include <stdio.h>

void main() {
    int Num1, Num2, GCD;

    printf("Enter 2 Numbers: ");
    scanf("%d, %d", &Num1, &Num2);

    if (Num1 > Num2) {
        Num2 += Num1;
        Num1 = Num2 - Num1;
        Num2 -= Num1;
    };

    for (int Num = Num1; Num > 0; Num--) {
        if ((Num1 % Num == 0) && (Num2 % Num == 0)) {
            GCD = Num;
            break;
        };
    };

    printf("GDC of %d and %d = %d", Num1, Num2, GCD);
}