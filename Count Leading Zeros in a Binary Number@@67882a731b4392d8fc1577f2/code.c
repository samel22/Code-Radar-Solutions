#include <stdio.h>
int main() {
    unsigned int number;
    scanf("%u", &number);
    int leadingzeros= __builtin_clz(number);
    printf("%d",leadingzeros)
    return 0;
}