#include <stdio.h>
int main() {
    int num,a;
    scanf("%d %d",&num,&a);
    num=num & ~(1 << a);
    printf("%d",num);
    return 0;
}