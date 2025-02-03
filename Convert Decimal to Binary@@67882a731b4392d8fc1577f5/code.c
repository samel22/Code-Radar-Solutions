#include <stdio.h>
int main() {
    unsigned int number;
    scanf("%u", &number);
    
    if(number=0){
        printf("0\n");
        return 0;
    }

    for(int i=31; i>=0; i--){
        if ((number>>i) & 1){
            printf("%d", (number >> i)& 1);
        }
    }
    printf("\n");
    return 0;
}