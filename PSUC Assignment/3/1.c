#include <stdio.h>

int getLength(char *p) {
    int Count = 0;
    while (*p != '\0') {
        Count++;
        p++;
    };
    return Count;
}

void main() {
    char String[100];

    printf("Enter String: ");
    gets(String);

    printf("Length of String: %d", getLength(String));
}