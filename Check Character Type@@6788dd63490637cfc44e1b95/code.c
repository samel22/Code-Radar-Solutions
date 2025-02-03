#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a>=0 && a<=9){
        printf("%c",&a);
    }
    else if(isalpha(a)){
        ch=tolower(a);
        if(ch =='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    return 0;
}