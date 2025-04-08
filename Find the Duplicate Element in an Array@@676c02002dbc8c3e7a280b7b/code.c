#include <stdio.h>
int dupe(int arr[], int N){
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
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
    dupe(arr,N);
}