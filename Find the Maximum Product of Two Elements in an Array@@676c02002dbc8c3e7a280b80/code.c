#include <stdio.h>
int maxproduct(int N, int arr[]){
    int maxpr=arr[0]*arr[1];
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            int product=arr[i]*arr[j];
            if(product>maxpr){
                maxpr=product;
            }
        }

    }
    printf("%d",product);
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
}