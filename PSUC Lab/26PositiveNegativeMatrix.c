#include <stdio.h>

void main() {
    int x, y, i, j, NegativeCount = 0, PositiveCount = 0;

    printf("Enter Dimensions of the matrix(x, y): ");
    scanf("%d, %d", &x, &y);

    int Arr[x][y];

    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            printf("Enter element(%d, %d): ", i, j);
            scanf("%d", &Arr[i][j]);
        };
    };

    printf("\nNegative elements in the array: ");
    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            if (Arr[i][j] < 0) {
                NegativeCount++;
                printf("%d ", Arr[i][j]);
            };
        };
    };
    printf("\nNumber of negative elements in the matrix = %d", NegativeCount);

    printf("\nPositive elements in the array: ");
    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            if (Arr[i][j] > 0) {
                PositiveCount++;
                printf("%d ", Arr[i][j]);
            };
        };
    };
    printf("\nNumber of negative elements in the matrix = %d", PositiveCount);
}