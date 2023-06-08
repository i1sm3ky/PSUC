#include <stdio.h>

void main() {
    int Size, Index;

    printf("Enter Size of Array: ");
    scanf("%d", &Size);

    int Arr[Size], *ptr[Size];

    for (Index = 0; Index < Size; Index++) {
        printf("Enter element: ");
        scanf("%d", &Arr[Index]);
        ptr[Index] = Arr + Index;
    };

    for (Index = 0; Index < Size; Index++) printf("%d ", *ptr[Index]);
}