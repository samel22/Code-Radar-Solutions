#include <stdio.h>
int fibonacciSeries(int n){
    if(n==0 || n==1) return n;

    else return fibonacciSeries(n-1) +fibonacciSeries(n-2);
}