#include <stdio.h>
int FindPeakElement(int arr[], int N) {

        // Edge case: only one element
        if (N == 1) return arr[0];

        // Check first element
        if (arr[0] >= arr[1]) return arr[0]; //first element > second element

        // Check last element
        if (arr[N - 1] >= arr[N - 2]) return arr[N - 1]; //last element>second last(should be) then return last element

        // Check middle elements
        for (int i = 1; i < N - 1; i++) {
            if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
                return arr[i];
            }
        }

        return -1;
    }

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int result= FindPeakElement(arr,N);
    printf("%d",result);
}