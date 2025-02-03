#include <stdio.h>
int main() {
    int number,n;
    scanf("%d %d",&number, &n);
    number = number ^ (1 << n);
    printf("d",number);        //number=7 (111), position=0bits, flip last 1 to 0, output- 110
    return 0;                 //number=10 (1010), position=1bit, flip last 2 digits, output- 1000 (8)
}                             //1010- 1(3rd bit), 0(2nd bit), 1(1st bit)- - - - -

//if n=1, 1 << 1 = 0010
//if n=3, 1<<3  =  1000 (3rd bit is 1 and 0,1,2 bits are 0)
//^ : returns 1 for 1^1 or 0^1 or 1^0 and 0 for rest all.
//eg: number=9, n=3: 1001 ^ 1000 = 0001 (toggle happens at 3rd bit so 0^1=1)