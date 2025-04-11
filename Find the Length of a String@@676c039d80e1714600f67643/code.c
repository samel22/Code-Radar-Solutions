#include <stdio.h>
#include <string.h>
void len(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("%d",count);
}

int main(){
    char str[100];
    scanf("%s",str);
    len(str);
}