#include <stdio.h>
#include <math.h>

void main() {
    int Num, TempNum, RevNum = 0;

    printf("Enter your number: ");
    scanf("%d", &Num);
    TempNum = Num;
    
    while (TempNum != 0){
        RevNum = RevNum * 10 + (TempNum % 10);
        TempNum /= 10;
    };

    Num == RevNum ? printf("Your number is a Palindrome.\n") : printf("Your number is not a Palindrome.\n");
}

void main_() {
    int Num, TempNum, Len = 0, Flag = 0;

    printf("Enter your number: ");
    scanf("%d", &Num);
    TempNum = Num;

    while (TempNum != 0) {
        Len++;
        TempNum /= 10;
    };
    TempNum = Num;

    for (int Index = 1; Index < Num / 2; Index++) {
        if ((TempNum % (int) pow(10, Index) / (int) pow(10, Index - 1)) != ((TempNum / (int) pow(10, --Len)) % 10)) {
            Flag++;
            break;
        };
    };

        Flag == 0 ? printf("Your number is a Palindrome.\n") : printf("Your number is not a Palindrome.\n");
}