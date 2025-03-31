#include <limits.h>
#include <stdio.h>
int main() {
    
      int N;
      scanf("%d",&N);
      int arr[N];
      for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
      }
      int max=INT_MIN;
      int smax=INT_MIN;
      for(int i=0;i<N;i++){
          if (max<arr[i]){
              smax=max; //smax is prev max 
              max=arr[i]; //
          }

          else if(smax<arr[i] && max!=arr[i]){ //when max<arr[i] in case of dec arr
              smax=arr[i];
          }

      }
      printf("%d",smax);
}
