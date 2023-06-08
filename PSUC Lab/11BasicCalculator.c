#include <stdio.h>

void main() {
    int Num1, Num2;
    char Operator;

    printf("Enter 2 Numbers(a, b): ");
    scanf("%d, %d", &Num1, &Num2);

    // Clearing Buffer
    scanf("%c", &Operator);

    printf("Enter a operator to use: ");
    scanf("%c", &Operator);

    switch (Operator) {
        case 37:
            printf("%d %c %d = %d\n", Num1, Operator, Num2, Num1 % Num2);
            break;
        case 42:
            printf("%d %c %d = %d\n", Num1, Operator, Num2, Num1 * Num2);
            break;
        case 43:
            printf("%d %c %d = %d\n", Num1, Operator, Num2, Num1 + Num2);
            break;
        case 45:
            printf("%d %c %d = %d\n", Num1, Operator, Num2, Num1 - Num2);
            break;
        case 47:
            printf("%d %c %d = %d\n", Num1, Operator, Num2, Num1 / Num2);
            break;
        default:
            printf("Please enter a valid Operator!\n");
    }
}