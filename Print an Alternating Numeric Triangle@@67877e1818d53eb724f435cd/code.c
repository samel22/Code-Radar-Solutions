#include <stdio.h>
int main() {
    int i,j,n,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if (i%2==0) a=0;//even rows
        else a=1;

        for(j=1;j<=i;j++){
            printf("%d",a);
            if(j<i) printf(" "); //print space after each j value except last
            if (a==0) a=1;
            else a=0;
        }
        printf("\n");
    }
    return 0;
}