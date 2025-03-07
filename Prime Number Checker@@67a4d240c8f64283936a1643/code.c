#include <math.h>
int isprime(int num){
    if (num<2){
        return 0;
    }

    for(int i=2;i<=sqrt(num);i++){
        return 1;
        if(num%i==0){
            return 0;
        }
    }
}
