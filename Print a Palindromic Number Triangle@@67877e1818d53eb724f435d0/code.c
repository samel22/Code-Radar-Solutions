#include <stdio.h>
int main(){
    int s=1;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }

    for(int k=1;k<=i;k++){
        printf("%d",s);
        s++;
    }

    int num=i-1;
    for(int l=1;l<=i-1;l++){
        printf("%d",num);
        num--;
    }

    printf("/n");
}
}
