#include <stdio.h>

void main() {
    int Data[100], N, value, Index, Shift = 0;

    printf("Enter size of array: ");
    scanf("%d", &N);

    for (Index = 0; Index < N; Index++) {
        printf("Enter element: ");
        scanf("%d", &Data[Index]);
    };

    printf("Enter number to be removed from the array: ");
    scanf("%d", &value);

    for (Index = 0; Index < N; Index++) {
        if (Data[Index + Shift] == value) {
            Shift++;
            Index--;
        } else {
            Data[Index] = Data[Index + Shift];
        };
    };
    N -= Shift;

    printf("Array after removing all occurances of %d: ", value);
    for (Index = 0; Index < N; Index++) {
        printf("%d ", Data[Index]);
    };
}