#include <stdio.h>
#include <string.h>
void palindrome(char str[], int N){
    int ispal=1;
    for(int i=0,j=N-1;i<=j;i++,j--){
        if(str[i]!=str[j]){
            ispal=0;
            break;
        }
    }

    if(!ispal){
        printf("No");
    }

    else{
        printf("Yes");
    }
}

int main(){
    char str[100];
    scanf("%s",str);
    int N=strlen(str);

    palindrome(str,N);
}