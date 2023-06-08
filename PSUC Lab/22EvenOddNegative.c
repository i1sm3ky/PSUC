#include <stdio.h>

void main() {
    int Size, Index;

    printf("Enter Size of Array: ");
    scanf("%d", &Size);

    int Arr[Size];

    for (Index = 0; Index < Size; Index++) {
        printf("Enter Element: ");
        scanf("%d", &Arr[Index]);
    };

    printf("\n");

    for (int i = 0; i < 3; i++) {
        (i == 0) ? printf("Even Numbers: ") : ((i == 1) ? printf("Odd Numbers: ") : printf("Negative Numbers: ")) ;
        for (Index = 0; Index < Size; Index++) {
            if (i == 0) {
                if (Arr[Index] % 2 == 0) printf("%d ", Arr[Index]);
            } else if (i == 1) {
                if (Arr[Index] % 2 != 0) printf("%d ", Arr[Index]);
            } else {
                if (Arr[Index] < 0) printf("%d ", Arr[Index]);
            };
        };
        printf("\n");
    };
}