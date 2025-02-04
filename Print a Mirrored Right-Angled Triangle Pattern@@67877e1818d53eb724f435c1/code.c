#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j<i;j++){
            printf(" ");

        for(j=1;j=i;j++){
            printf("* ");
        }
        }
        printf("\n");
    }

    return 0;
}
//n=5
//i=1, j=5      stars=goes till (6-i)
//i=2  j=5,4
//i=3  j=5,4,3
//i=4  j=5,4,3,2
//i=5  j=5,4,3,2,1

//i=1 j=5,