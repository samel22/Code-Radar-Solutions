#include <stdio.h>
int firstMissingPositive(int N, int arr[]) {
    for(int i=0;i<N;i++){
        while(arr[i]>=0 && arr[i]<=N && arr[arr[i]-1]!=arr[i]){//jese arr[2] pe 3 hona chahiye agr vo na ho then swap
        //arr[2]=arr[3] 

        // Swap nums[i] and nums[nums[i] - 1]
        int temp=arr[i];
        arr[i]=arr[temp-1]; //swap i with i-1 (previous element)
        arr[temp-1]=temp;

        }
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }

    // All positions are correct, so the missing number is numsSize + 1
    return N + 1;
    
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
    }
}