#include <stdio.h>
int run(int N, int arr[]){
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            sum+=arr[j];
            arr[i]=sum;
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
    run{N,arr};

     for(int i=0;i<N;i++){
        printf("%d",arr[i]);
    }

    
}