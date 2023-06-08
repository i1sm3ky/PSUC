#include <stdio.h>

void main() {
    // Declaring variables
    int N, TempNum, RevNum = 0;

    // Taking input from user
    printf("Enter your number: ");
    scanf("%d", &N);
    TempNum = N;

    // Reversing the number
    while (TempNum != 0) {
        RevNum = RevNum * 10 + (TempNum % 10);
        TempNum /= 10;
    };

    // Checking and Printing if the number is a palindrome or not
    N == RevNum ? printf("Is a Palindrome Number\n") : printf("Not a Palindrome\n");
}