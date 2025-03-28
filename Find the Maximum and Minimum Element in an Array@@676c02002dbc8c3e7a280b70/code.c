#include <stdio.h>
#include <limits.h>
int main() {
      int N;
      scanf("%d",&N);
      for(int i=0;i<N;i++){
      scanf("%d",&arr[i]);
      }
      
      int max=INT_MIN;
      for(int i=0;i<3;i++){
          if (max<arr[i]){
              max=arr[i];
          }

      }
      printf("%d",max);
}