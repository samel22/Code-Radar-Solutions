#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=1;
        for(j=1;j<=i;j++){
            int d=64+a;
            char ch=(char)d;
            printf(" %d",d);
            a++;
        }
        printf("/n");
    }
    return 0;
}