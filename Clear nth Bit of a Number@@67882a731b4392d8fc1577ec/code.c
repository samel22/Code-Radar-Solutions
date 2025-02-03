#include <stdio.h>
int main() {
    int num,a;
    scanf("%d %d",&num,&a);
    num=num & ~(1 << a); //1<<3: 1<<~(00001000) = 1<<(11110111)then applying & operation on this- would give 0 on third bit as anything operating & with 0 is 0 only
    printf("%d",num);
    return 0;
}