#include <stdio.h>
#include <string.h>
int replace(char a, char b, char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==a){
            str[i]=b;
        }
    }
    printf("%s",str);
}

int main(){
    char str[100], a,b;
    scanf("%s",str);
    scanf("%s",a);
    scanf("%s",b);

    replace(a,b,str);

}