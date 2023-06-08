#include <stdio.h>

int getLength(char *p) {
    if (*p == '\0') return 0;
    return (1 + getLength(++p));
}

void main() {
    char String[100];

    printf("Enter String: ");
    gets(String);

    printf("Length of Sting: %d", getLength(String));
}