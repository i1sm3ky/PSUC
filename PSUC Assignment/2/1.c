#include <stdio.h>

int main() {
    // Declaring variables
    int data[100], N;

    // Taking size of array from user
    printf("Enter Size of Array: ");
    scanf("%d", &N);

    // Checking if the size given by the user is more than the array size
    if (N > 100) {
        printf("Size cannot be more than 100!\n");
    } else {

        // Taking input in the array data[]
        for (int Index = 0; Index < N; Index++) {
            printf("Enter element in the Array: ");
            scanf("%d", &data[Index]);
        };

        // Checking and removing duplicates
        for (int Index = 0; Index < N; Index++) {
            for (int RIndex = Index + 1; RIndex < N; RIndex++) {
                if (data[Index] == data[RIndex]) {
                    for (int SIndex = RIndex; SIndex < N; SIndex++) {
                        data[SIndex] = data[SIndex + 1];
                    };
                    N--; Index--; break;
                };
            };
        };

        // Print the remaining elements of the array
        printf("Array after removal of duplicate elements: ");
        for (int Index = 0; Index < N; Index++) {
            printf("%d ", data[Index]);
        };
    };
    return 0;
}