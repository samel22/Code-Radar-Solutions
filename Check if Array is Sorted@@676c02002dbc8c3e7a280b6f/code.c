#include <stdio.h>
#include <stdbool.h>
void bubbleSort(int arr[],int n){
    int flag;
    for(int i=0;i<n-1;i++){
        flag=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=true;
            }
        }
    }

}

void check(int flag){
    if(flag == true) printf("Not Sorted");
    else printf("Sorted");
}

int main(){
    int n;
    scanf("%d",n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    inc(n,arr);
}