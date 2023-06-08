#include <stdio.h>

void main() {
    int Num, *ptr;

    printf("Enter a number: ");
    scanf("%d", &Num);

    ptr = &Num;

    printf("Value at %p or %u = %d", ptr, ptr, *ptr);
}