#include <stdio.h>
#include <string.h>
void vow(char str[], int N){
    int count=0;
    for(int i=0;i<N;i++){
        if(str[i] == 'a' || str[i] =='A' || str[i] =='e' || str[i] =='E' || str[i] =='i' || str[i] =='I' || str[i] =='O' || str[i] =='o' || str[i] =='u' || str[i] =='U'){
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