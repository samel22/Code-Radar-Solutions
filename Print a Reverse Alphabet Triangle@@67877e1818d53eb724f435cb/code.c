#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        int d=1;
        for(j=1;j<=i;j++){
            int c=64+d;
            char ch=(char)c;
            printf("%c ",ch);
            d++;
        }
        printf("\n");
    }
    return 0;
}