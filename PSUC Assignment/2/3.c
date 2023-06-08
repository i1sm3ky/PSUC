#include <stdio.h>

void main() {
    // Declaring variables
    int Day, Month, Year;

    // Taking Input
    printf("Enter your date(DD-MM-YYYY): ");
    scanf("%d-%d-%d", &Day, &Month, &Year);

    // Printing Day
    if (Day == 1) printf("%dˢᵗ ", Day);
    else if (Day == 2) printf("%dⁿᵈ ", Day);
    else if (Day == 3) printf("%dʳᵈ ", Day);
    else printf("%dᵗʰ ", Day);

    // Printing Month
    switch (Month) {
        case 1:
            printf("January, ");
            break;
        case 2:
            printf("February, ");
            break;
        case 3:
            printf("March, ");
            break;
        case 4:
            printf("April, ");
            break;
        case 5:
            printf("May, ");
            break;
        case 6:
            printf("June, ");
            break;
        case 7:
            printf("July, ");
            break;
        case 8:
            printf("August, ");
            break;
        case 9:
            printf("September, ");
            break;
        case 10:
            printf("October, ");
            break;
        case 11:
            printf("November, ");
            break;
        case 12:
            printf("December, ");
            break;
    };

    // Printing Year
    printf("%d\n", Year);
}