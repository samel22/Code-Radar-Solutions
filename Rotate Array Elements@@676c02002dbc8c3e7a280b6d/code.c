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
        printf("%d\n",arr[i]);
    }
}

int main(){
    int N,K;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&K);

    K=K%N;

    rotate(arr,0,N-1);//Reversing full array
    rotate(arr,0,K-1);//reversing first k elements
    rotate(arr,K,N-1);//rev rest

    display(arr,N);
}