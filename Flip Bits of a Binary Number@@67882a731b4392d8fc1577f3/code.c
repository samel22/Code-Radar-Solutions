#include <stdio.h>
int main() {
    unsigned int number;
    scanf("%u", &number);
    unsigned int flipped= ~number;
    printf("%d",flipped);
    return 0;
}