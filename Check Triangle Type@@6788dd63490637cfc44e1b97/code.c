#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
        if(a==b && b==c && c==a){
            printf("Equilateral\n");
        }
        if((a==b || b==c || a==c) && (a>b || b>c || c>a)){
            printf("Isosceles\n");
        }
        else{
            printf("Scalene\n");
        }
    return 0;
}