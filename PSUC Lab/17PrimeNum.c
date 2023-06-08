#include <stdio.h>

void main() {
    int Num, Flag = 0;

    printf("Enter your number: ");
    scanf("%d", &Num);

    if (Num == 0 || Num == 1) {
        printf("Your number is neither prime nor composite.\n");
    };

    for (int i = 2; i <= Num / 2; i++) {
        if (Num % i == 0) {
            Flag = 1;
            break;
        };
    };

    (Flag == 0) ? printf("Your number is Prime.\n") : printf("Your number is not Prime.\n");
}