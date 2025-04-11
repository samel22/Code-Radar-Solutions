#include <stdio.h>
#include <string.h>
int replace(char a, char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==a){
            count++;
        }
    }
    printf("%d",count);
}

int main(){
    char str[100], a,b;
    scanf("%s", str);        // Read string
    scanf("%c", &a);        // Read char to replace (space before %c handles newline)     // 

    replace(a,str);

}