#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);  // Reads first word (no spaces)

    printf("Enter second string: ");
    scanf("%s", str2);  // Reads second word (no spaces)

    strcat(str1, str2);  // Concatenates str2 to end of str1

    printf("Concatenated string: %s\n", str1);

    return 0;
}
