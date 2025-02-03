#include <stdio.h>
int main() {
    int number, position=0;
    scanf("%d",&number);
    while((number & 1)==0){
        position++;
        number=number >> 1;
    }
    printf("%d",position);
    return 0;
}