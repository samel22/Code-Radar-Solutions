#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b&,&c);
    if((a+b>c) && (a+c>b) && (b+c>a)){
        if(a==b && b==c){
            printf("Equilateral");
        }
        if(a==b || a==c || c==b){
            printf("Isosceles");
        }
        else{
            printf("Scalene");
        }}
    return 0;
}