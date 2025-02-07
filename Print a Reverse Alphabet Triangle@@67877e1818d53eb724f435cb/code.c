#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int d=1;
        for(j=n;j<=i;j--){
            int c=64+d;
            char ch=(char)c;
            printf("%c ",ch);
            d++;
        }
        printf("\n");
    }
    return 0;
}