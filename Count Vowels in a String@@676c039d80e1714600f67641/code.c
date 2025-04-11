#include <stdio.h>
#include <string.h>
void vow(char str[], int N){
    int count=0;
    for(int i=0;i<N;i++){
        if(str[i] == 'a' || 'A' || 'e' || 'E' || 'i'' || 'I'' || 'O' || 'o' || 'u' || 'U'){
            count++; 
        }
    }

    printf("%d",count);
}

int main(){
    char str[100];
    scanf("%d",str);
    int N=strlen(str);

    vow(str,N);
}