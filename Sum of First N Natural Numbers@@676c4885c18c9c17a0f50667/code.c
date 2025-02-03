#include <stdio.h>
int main() {
    int a, sum1=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        sum1+=i;
    }
    printf("%d",sum1);
    return 0;
}