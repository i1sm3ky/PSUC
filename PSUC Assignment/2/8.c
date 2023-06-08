#include <stdio.h>
#include <string.h>

int main() {
    // Declaring variables
    char str1[100], str2[100];
    int index, k, Len1, Len2, Flag;

    // Taking inputs
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Finding lengths of given strings
    Len1 = strlen(str1);
    Len2 = strlen(str2);

    //  Checking if str2 is longer than str2
    if (Len1 < Len2) {
        printf("%s cannot contain %s as %s is smaller than %s.\n", str1, str2, str1, str2);
    } else {
        // Checking if str2 is present in str1
        for (int i = 0; i < (Len1 - Len2 + 1); i++) {
            k = i;
            Flag = 0;
            for (int j = 0; j < Len2; j++) {
                if (str1[k++] != str2[j]) {
                    Flag = 1;
                    break;
                }; 
            };
            if (Flag == 0) {
                printf("The string %s contains string %s from index %d to %d.\n", str1, str2, i, i + Len2 - 1);
                break;
            };
        };
        if (Flag != 0) printf("%s doesnot contain %s.\n", str1, str2);
    };

    return 0;
}