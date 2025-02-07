#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==1){
            printf("1")
        }
        else{
        for(j=1;j<=i;j++){
            printf(" %d",j%2);
        }
        printf("\n");
    }}
    return 0;
}