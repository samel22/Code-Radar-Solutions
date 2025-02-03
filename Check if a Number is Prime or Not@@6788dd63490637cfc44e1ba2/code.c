#include <stdio.h>
int main() {
    int n,i,isprime=1;
    scanf("%d",&n);
    if(n<=1){
        isprime=0;
    }
    
    for(i=2; i<=sqrt(n); ++i){
        if(n%i==0){
            isprime=0;
            break;
        }
    }

    if (isprime == 1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}