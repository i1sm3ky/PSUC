#include <stdio.h>

int main() {
    // Declaring variables
    int data1[100], N1;
    int data2[100], N2;
    int i, j, Flag, LastIndex;

    // Taking size of array data1 from user
    printf("Enter Size for first array: ");
    scanf("%d", &N1);
    LastIndex = N1;

    // Taking input in the array data1
    for (i = 0; i < N1; i++) {
        printf("Enter element: ");
        scanf("%d", &data1[i]);
    };

    // Taking size of array data2 from user
    printf("Enter Size for second array: ");
    scanf("%d", &N2);

    // Taking input in the array data2
    for (i = 0; i < N2; i++) {
        printf("Enter element: ");
        scanf("%d", &data2[i]);
    };

    // Appending unique elements from data2 to data1
    for (i = 0; i < N2; i++) {
        Flag = 0;
        for (j = 0; j < N1; j++) {
            if (data2[i] == data1[j]) {
                Flag = 1;
                break;
            };
        };
        if (Flag == 0) data1[LastIndex++] = data2[i];
    };

    // Printing the number of elements in data1
    printf("N1 = %d\ndata1 = ", LastIndex);

    // Printing elements of data1
    for (i = 0; i < LastIndex; i++) {
        printf("%d ", data1[i]);
    };

    return 0;
}