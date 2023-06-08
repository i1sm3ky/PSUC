#include <stdio.h>

void concat(char *c1, char *c2) {
    while (*c1 != '\0') c1++;
    while (*c2 != '\0') *c1++ = *c2++;
}

void main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    concat(str1, str2);

    printf("Concatenated string: %s", str1);
}