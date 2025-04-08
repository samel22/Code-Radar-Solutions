#include <stdio.h>
#include <limits.h>
int lar(int N,int arr[]){
    int max=INT_MIN;
    for(int i=0;i<N;i++){
        if(max<arr[i]){
            if(arr[i]%2==0){
            max=arr[i];
            }
        }
    }
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    lar(N,arr);
}