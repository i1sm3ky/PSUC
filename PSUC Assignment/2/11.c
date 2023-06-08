#include <stdio.h>
#include <string.h>

int main() {
    // Declaring variables
    char Name[100];
    int Index, Count[128] = {};

    // Taking  input
    printf("Enter String: ");
    gets(Name);

    // Counting each character in the string: Name
    for (Index = 0; Index < strlen(Name); Index++) Count[((Name[Index] >= 97 && Name[Index] <= 122) ? (Name[Index] - 32) : Name[Index])]++;

    // Printing all characters in the Name along with their counts
    for (Index = 33; Index <= 127; Index++) if (Count[Index] != 0) printf("%c, count = %d\n", Index, Count[Index]);

    return 0;
}