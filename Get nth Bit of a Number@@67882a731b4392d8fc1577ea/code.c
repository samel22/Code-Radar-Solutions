#include <stdio.h>
int main() {
    int a,b,bit;
    scanf("%d %d",&a,&b);
    bit=(a >> b) & 1; //this is bitwise rightshift operator which shifts a to the right to b digits.
    printf("%d",bit);
    return 0;
}