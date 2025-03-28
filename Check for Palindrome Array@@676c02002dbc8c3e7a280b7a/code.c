#include <stdio.h>
void pal(int arr[], int n){
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
      int n;
      printf("enter n");
      scanf("%d",&n);
      int arr[n];
      for(int i=0;i<=n-1;i++){
          printf("enter arr element %d ",i+1);
          scanf("%d",&arr[i]);
      }

      pal(arr,n);
}