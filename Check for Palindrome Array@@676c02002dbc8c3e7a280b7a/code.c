#include <stdio.h>
void pal(int arr[], int N){
    int i=0,j=n-1, ispal=1;
    while(i<j){
        if(arr[i] != arr[j]){
            ispal=0;
            break;
        }
        i++;
        j--;
    }//while loop closes

    if(ispal==1){
        printf("palindrome");
    }

    else{
        printf("not pal");
    }
}

int main() {
      int N;
      scanf("%d",&N);
      int arr[N];
      for(int i=0;i<=N-1;i++){
          scanf("%d",&arr[i]);
      }

      pal(arr,n);
}