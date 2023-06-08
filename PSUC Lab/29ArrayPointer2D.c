#include <stdio.h>

void main() {
    int x, y, i, j;

    printf("Enter Dimensions of the matrix(x, y): ");
    scanf("%d, %d", &x, &y);

    int Arr[x][y], *ptr = Arr;

    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            printf("Enter element(%d, %d): ", i, j);
            scanf("%d", &Arr[i][j]);
        };
    };

    printf("\nMatrix:\n");
    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            printf("%d ", *(ptr++));
        };
        printf("\n");
    };
}