#include <stdio.h>
void rotate(int arr[], int si, int ji){
    for(int i=si, j=ji ; i<j ;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;

}

void display(int arr[], int N){
    for(int i=0;i<N;i++){
        printf("%d",arr[i]);
    }
}

int main(){
    int N,K;
    scanf("%d",&N);
    int mid=N/2;
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",K);

    rotate(arr,0,N-1);
    rotate(arr,0,mid-1);
    rotate(arr,mid-1,N-1);
}