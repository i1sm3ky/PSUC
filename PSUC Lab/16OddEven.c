#include <stdio.h>

void main() {
    int Num;

    printf("Enter Your Number: ");
    scanf("%d", &Num);

    // (Num % 2 == 0) ? printf("Your number is even.\n") : printf("Your number is odd.\n");

    if (Num % 2 == 0) {
        printf("Your number is even.\n");
    } else {
        printf("Your number is odd.\n");
    }
}