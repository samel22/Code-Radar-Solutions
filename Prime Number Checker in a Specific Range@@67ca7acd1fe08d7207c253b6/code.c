#include <stdio.h>
#include <math.h>
void prime(int a, int b,int arr[]){
    for(int i=a;i<=b;i++){
        for(int j=2;j<=sqrt(i);i++){
            if(i%j==0) printf("No prime numbers");
            else printf(" %d",i);
        }
    }

}