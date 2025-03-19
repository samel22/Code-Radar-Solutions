#include <stdio.h>
int main(){
    int n, nsp=n/2, nst=1, ml=(2*n-1)/2 + 1; //ml=middle line
    scanf("%d",&n);

for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=nsp;j++){
        printf(" ");
    }

    for(int k=1;k<=nst;k++){
        printf("*");
    }

    if(i<ml){//upper
        nsp--;
        nst+=2;
    }

    else{//lower
        nsp++;
        nst-=2;
    }
    printf("\n");
}
}