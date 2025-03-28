#include <stdio.h>
void pal(int arr[], int N){
    int i=0,j=N-1, ispal=1;
    while(i<j){
        if(arr[i] != arr[j]){
            ispal=0;
            break;
        }
        i++;
        j--;
    }//while loop closes

    if(ispal==1){
        printf("YES");
    }

    else{
        printf("NO");
    }
}

int main() {
      int N;
      scanf("%d",&N);
      int arr[N];
      for(int i=0;i<=N-1;i++){
          scanf("%d",&arr[i]);
      }

      pal(arr,N);
}