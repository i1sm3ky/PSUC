#include <stdio.h>

void main() {
    int x, y, i, j;

    printf("Enter Dimensions of the matrices(x, y): ");
    scanf("%d, %d", &x, &y);

    int Arr1[x][y], Arr2[x][y], Arr3[x][y], Arr4[x][y];

    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            printf("Enter element(%d, %d): ", i, j);
            scanf("%d", &Arr1[i][j]);
        };
    };

    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            printf("Enter element(%d, %d): ", i, j);
            scanf("%d", &Arr2[i][j]);
        };
    };

    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            Arr3[i][j] = Arr1[i][j] + Arr2[i][j];
            Arr4[i][j] = Arr1[i][j] - Arr2[i][j];
        };
    };

    printf("\nResult matrix after addition:\n");
    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            printf("%d ", Arr3[i][j]);
        };
        printf("\n");
    };

    printf("\nResult matrix after substraction:\n");
    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            printf("%d ", Arr4[i][j]);
        };
        printf("\n");
    };
}