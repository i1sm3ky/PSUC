#include <stdio.h>
#include <string.h>

int main() {
    // Declaring variables
    char str1[100], str2[100];
    int index, i, Len2, TempLen2;

    // Taking inputs
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    printf("Enter index: ");
    scanf("%d", &index);

    // Getting length of str2
    Len2 = TempLen2 = strlen(str2);

    // Inserting str2 in str1 from given index
    for (i = strlen(str1) - 1; i >= index; i--) {
        str1[i + Len2] = str1[i];
        if (i <= (index + Len2 - 1)) {
            str1[i] = str2[--TempLen2];
        };
    };

    // Printing out str1
    printf("str1 = %s\n", str1);

    return 0;
}