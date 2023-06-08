#include <stdio.h>

int ReverseNum(int Num, int Rev) {
    if (Num == Num % 10) return ((Rev * 10) + Num);

    Rev = (Rev * 10) + Num % 10;
    return ReverseNum(Num / 10, Rev);
}

int isPalindrome(int N) {
    return N == ReverseNum(N, 0);
}

void main() {
    int Num;

    printf("Enter Number: ");
    scanf("%d", &Num);

    isPalindrome(Num) ? printf("Your number is a palindrome.") : printf("Your number is not a palindrome.");
}