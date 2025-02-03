#include <stdio.h>
int main() {
    int a,d;
    scanf("%d %d",&a,&d);
    if(a%d==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}