#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n<=1){
        isprime=0;
    }
    
    for(i=2; i<=n/2; ++i){
        if(n%i==0){
            isprime=0;
            break;
        }
    }

    if (isprime = 1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}