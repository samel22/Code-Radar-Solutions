#include <stdio.h>
#include <limits.h>
int sec(){
    int min=INT_MAX;
    int smin=INT_MAX;
    for(int i=0;i<N;i++){
        if(min>arr[i]){
            smin=min;
            min=arr[i];

        }
    }
    printf("%d",smin);
}
int main(){
    int target,N;
    scanf("%d",&N);

    int arr[N];

    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
}