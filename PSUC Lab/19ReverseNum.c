#include <stdio.h>

void main() {
    int Num, RevNum = 0;

    printf("Enter your number: ");
    scanf("%d", &Num);
    
    while (Num != 0){
        RevNum = RevNum * 10 + (Num % 10);
        Num /= 10;
    };

    printf("Reverse of your number: %d\n", RevNum);
}