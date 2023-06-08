#include <stdio.h>

void main() {
    int Num = 20, PostInc, PreInc, PreDec, PostDec;
    printf("Initial Num= %d\n", Num);
    PostInc = Num++;
    printf("After Num++ : Num = %d, PostInc = %d\n", Num, PostInc);
    PreInc = ++Num;
    printf("After ++Num : Num = %d, PreInc = %d\n", Num, PreInc);
    PreDec = --Num;
    printf("After --Num : Num = %d, PreDec = %d\n", Num, PreDec);
    PostDec = Num--;
    printf("After Num-- : Num = %d, PostDec = %d\n", Num, PostDec);
}