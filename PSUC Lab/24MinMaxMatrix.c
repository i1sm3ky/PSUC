#include <stdio.h>

void main() {
    int x, y, i, j, Min, Max;

    printf("Enter Dimensions of the matrix(x, y): ");
    scanf("%d, %d", &x, &y);

    int Arr[x][y];

    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            printf("Enter element(%d, %d): ", i, j);
            scanf("%d", &Arr[i][j]);
        };
    };

    Min = Max = Arr[0][0];

    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            if (Arr[i][j] < Min) Min = Arr[i][j];
            if (Arr[i][j] > Max) Max = Arr[i][j];
        };
    };

    printf("\nMinimum element in the matrix = %d", Min);
    printf("\nMaximum element in the matrix = %d", Max);
}