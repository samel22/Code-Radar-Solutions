#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    if(isupper(c)){
        printf("Uppercase");
    }
    else if(islower(c)){
        printf("Lowercase");
    }

    return 0;
}