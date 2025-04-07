#include <stdio.h>
int check(int arr[],int N){
    for(int i=0;i<N;i++){
        if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){
            //printf("%d",arr[i]);
            return arr[i];
        }
        else return -1;
    }

}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++) scanf("%d",&arr[i]);
    int result=check(arr,N);
    printf("%d",result);
}