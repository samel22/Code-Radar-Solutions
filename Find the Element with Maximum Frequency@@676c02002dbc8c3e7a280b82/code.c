#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int count;
    for(int i=0;i<N;i++){
        count=0;
        for(int j=0;j<N;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>=(N/2+1)) {
            printf("%d\n",arr[i]);
            return 0;
        }
    }
    printf("-1");

}