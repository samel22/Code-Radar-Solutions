#include <stdio.h>
#include <math.h>
int isprime(int n){
    if(n<=1) return 0;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
        else return 1;
    }
}
void printPrimesInRange(int a, int b,int arr[]){
    for(int i=a;i<=b;i++){
        if(isPrime(i)) printf("%d",i);
    }
    printf("\n");
}

