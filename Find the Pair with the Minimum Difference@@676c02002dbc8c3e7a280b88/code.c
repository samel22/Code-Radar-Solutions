#include <stdio.h>
#include <limits.h>
int min(int N, int arr[]){

     if (N < 2) {//size of array is less than 2
        printf("-1");
        return;
    }

    int mindiff=INT_MAX;
    int mini=0;
    int minj=0;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            int diff=abs(arr[i]-arr[j]);
            if(diff<mindiff){
                mindiff=diff;
                mini=arr[i];
                minj=arr[j];
            }
        }
    }
     if (mini < minj) //print in ascending order
        printf("%d %d\n", mini, minj);
    else
        printf("%d %d\n", minj, mini);
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