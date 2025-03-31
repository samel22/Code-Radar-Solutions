#include <stdio.h>
void find(int arr[], int N, int T){
for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i] != arr[j] && (arr[i]+arr[j]==T)){
                    printf("%d %d\n",arr[i], arr[j]);
                }
            }
        }
    }



int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
     for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int T;
    scanf("%d",&T);

    find(arr,N,T);
}