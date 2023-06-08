#include <stdio.h>

int GreaterNum(int Num1, int Num2) {
    return Num1 > Num2 ? Num1 : Num2;
}

int MaxNum(int Arr[], int N) {
    if (N == 1) return Arr[0];
    return GreaterNum(Arr[N - 1], MaxNum(Arr, N - 1));
}

void main() {
    int N;

    printf("Enter size of array: ");
    scanf("%d", &N);

    int Arr[N];

    for (int i = 0; i < N; i++) {
        printf("Enter number: ");
        scanf("%d", &Arr[i]);
    };

    printf("Highest number in the array: %d", MaxNum(Arr, N));
}