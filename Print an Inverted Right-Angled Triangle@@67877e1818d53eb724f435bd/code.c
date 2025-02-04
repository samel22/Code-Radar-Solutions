#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){ //i=5,i=4,----i=1; (n=5)
        for(j=1;j<=i;j++) //for i=5, j=1,2,3,4,5(means star occurs in 1-5 columns)
    }
    return 0;
}
//i=5; j=1,2,3,4,5
//i=4, j=1,2,3,4
//i=3, j=1,2,3
//i=2, j=1,2
//i=1, j=1