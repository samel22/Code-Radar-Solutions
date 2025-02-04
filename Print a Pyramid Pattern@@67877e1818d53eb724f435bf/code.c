#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//n=3
//i=1, j=1 (1 star)
//i=2, j=1,2,3 (3 star)
//i=3, j=1,2,3,4,5 (5 stars)