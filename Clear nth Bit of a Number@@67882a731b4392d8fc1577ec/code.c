#include <stdio.h>
int main() {
    int num,a,ans;
    scanf("%d %d",&num,&a);
    ans=num & ~(1 << (n-1));
    printf("%d",ans);
    return 0;
}