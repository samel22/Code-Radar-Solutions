#include <stdio.h>
void number(int n, int arr[]){
    int counte=0, counto=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) counte+=1;
        else if(arr[i]%2!=0) counto+=1;
    }
    printf("%d",counte);
    printf("%d",counto);

}

int main(){
    int n,arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    number(n,arr);


}