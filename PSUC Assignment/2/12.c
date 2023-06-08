#include <stdio.h>

// Function for finding powers
int Pow(int Base, int Power) {
    int Product;

    if (Power == 0) return 1;
    
    if (Power % 2 == 0) {
        Product = Pow(Base, Power / 2);
        return Product * Product;
    } else return Base * Pow(Base, --Power);
}

// Function for finding factorial
int Fact(int Num) {
    if (Num == 0) return 1;
    return Num * Fact(--Num);
}

void main() {
    // Declaring variables
    int x, N, Sum = 0;

    // Taking input
    printf("Enter values of x, N: ");
    scanf("%d, %d", &x, &N);

    // Calculating the sum of the series for N Terms
    for (int i = 0, j = 0; i < 2 * N; i++, j++) {
        Sum += ((Pow(x, ++i) / Fact(i)) * ((j % 2 != 0) ? -1 : 1));
    };

    // Printing the sum
    printf("Sum of the series = %d\n", Sum);
}