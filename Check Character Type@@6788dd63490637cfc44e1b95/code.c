#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>='0' && ch<='9'){
        printf("Digit");
    }
    else if(isalpha(ch)){
        ch = tolower(ch);
        if(ch =='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            printf("Vowel\n");
        }
        else{
            printf("Consonant\n");
        }
    }
    else{
        printf("Special character\n");
    }
    return 0;
}