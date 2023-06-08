#include <stdio.h>

void main() {
    int Size, Index, Sum = 0;

    printf("Enter Size of Array: ");
    scanf("%d", &Size);

    int Arr[Size], *ptr = Arr;

    for (Index = 0; Index < Size; Index++) {
        printf("Enter Element: ");
        scanf("%d", &Arr[Index]);
    };

    for (Index = 0; Index < Size; Index++, ptr++) Sum += *ptr;

    printf("Sum of all elements in the array: %d", Sum);
}