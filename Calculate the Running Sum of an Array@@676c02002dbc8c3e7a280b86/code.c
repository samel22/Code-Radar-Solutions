#include <stdio.h>
void run(int N, int arr[]) {
    for (int i = 1; i < N; i++) {
        arr[i] += arr[i - 1];  // add previous sum to current
    }
}


int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    run(N,arr);

     for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }

    
}