#include <stdio.h>
#include <limits.h>
void sec(int N,int arr[]){

    int min=INT_MAX;
    int smin=INT_MAX;

    for(int i=0;i<N;i++){
        if(min>arr[i]){
            smin=min;
            min=arr[i];

        }

         else if (arr[i] < smin && arr[i] != min) {
            smin = arr[i];
        }
    }
    if (smin == INT_MAX) {
        printf("-1\n");
    } else {
        printf("%d\n", smin);
    }
}
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];

    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    sec(N,arr);
}