#include <stdio.h>
#include <string.h>
void rev(int str[], int L){
    for(int i=0,j=L-1;i<=j;i++,j--){
        int temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
        printf("%s",str);
    
}

int main(){
    char str[100];
    scanf("%s",str);

    int L=strlen(str);

    rev(str,L);

}