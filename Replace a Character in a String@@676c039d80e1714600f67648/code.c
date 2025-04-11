#include <stdio.h>
#include <string.h>
int replace(char a, char b){
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
    scanf("%c",a);
    scanf("%c",b);

    replace(a,b);

}