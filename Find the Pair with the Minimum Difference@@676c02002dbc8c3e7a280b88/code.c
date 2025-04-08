#include <stdio.h>
int min(int N, int arr[]){
    int mindiff=arr[0]-arr[1];
    int mini=arr[0];
    int minj=arr[1];
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            int diff=arr[i]-arr[j];
            if(diff<mindiff){
                mindiff=diff;
                mini=arr[i];
                minj=arr[j];
            }
        }
    }
    printf("%d %d",mini, minj);
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
    }
    min(N,arr);
    }