#include <stdio.h>
int find(int arr[],int N,int target){
    for(int i=0;i<N;i++){
        if(arr[i]==target){
            printf("%d",i);
            return 0;
        }

    }
    printf("-1");
}

int main(){
    int target,N;
    scanf("%d",&N);

    int arr[N];

    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&target);

    find(arr,N,target);
    
    

}