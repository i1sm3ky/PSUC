#include <stdio.h>

void main() {
    int Distance, TempDistance, TotalCost = 0;

    printf("Enter Distance: ");
    scanf("%d", &Distance);
    TempDistance = Distance;

    int Condition = (Distance > 800) ? 3 : ((Distance > 200) ? 2 : (Distance / 100));

    switch (Condition) {
        case 3:
            TotalCost += 20 * (Distance - 800);
            Distance = 800;
        case 2:
            TotalCost += 15 * (Distance - 200);
            Distance = 200;
        case 1:
            TotalCost += 12 * (Distance - 100);
            Distance = 100;
        case 0:
            TotalCost += 10 * Distance;
    };

    printf("Total cost of travelling %d km= %d\n", TempDistance, TotalCost);
}