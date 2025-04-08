#include <stdio.h>
int countEl(int N,int arr[], int T){
    int count=0;
    for(int i=0;i<N;i++){
        if(arr[i]==T){
            count++;
        }
    }
    printf("%d",count);
}

int main(){
    int N,T;
    scanf("%d %d",&N,&T);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    countEl(N,arr,T);
}