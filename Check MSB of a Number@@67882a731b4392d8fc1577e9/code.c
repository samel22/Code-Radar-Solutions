#include <stdio.h>
int main() {
    unsigned int a;
    scanf("%u",&a);
    if(a & (1<<31)){  //32-bit integer is represented by 32 binary digits(bits), MSG is leftmost so we used left shift operator
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}