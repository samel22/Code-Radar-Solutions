#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    switch(c){
        case 'R':
        printf("Stop");
        break;

        case 'G':
        printf("Go");
        break;

        case 'y':
        printf("Slow Down");
        break;

        default:
        printf("Invalid input");
        break;
    }
    return 0;
}