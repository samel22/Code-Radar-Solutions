#include <stdio.h>
void inc(int n, int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]<=arr[i+1]) printf("Sorted");
        else printf("Not Sorted");
    }
}

int main(){
    int n,arr[n];
    scanf("%d",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    inc(n,arr);
}