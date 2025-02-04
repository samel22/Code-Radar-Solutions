#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){ 
        for(j=1;j<=i;j++){
        printf("* ");
    }
    printf("\n");
}
    return 0;
}
//i=5; j=1,2,3,4,5
//i=4, j=1,2,3,4
//i=3, j=1,2,3
//i=2, j=1,2
//i=1, j=1