#include <stdio.h>
void leader(int N, int arr[]){
    for(int i=0;i<N;i++){
        int isleader=1;
        for(int j=i+1;j<N;j++){
            if(arr[i]<arr[j]){
                isleader=0;
                break;
            }
        }

         if(isleader) {
            printf("%d ", arr[i]);
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

    leader(N,arr);
}

