#include <stdio.h>

void main() {
    int Size, Index, Min, Max;

    printf("Enter Size of Array: ");
    scanf("%d", &Size);

    int Arr[Size];

    for (Index = 0; Index < Size; Index++) {
        printf("Enter Element: ");
        scanf("%d", &Arr[Index]);
    };

    Min = Arr[0];
    Max = Arr[0];

    for (Index = 0; Index < Size; Index++) {
        if (Arr[Index] < Min) Min = Arr[Index];
        if (Arr[Index] > Max) Max = Arr[Index];
    };

    printf("\nMinimum value: %d\nMaximum value: %d\n", Min, Max);
}