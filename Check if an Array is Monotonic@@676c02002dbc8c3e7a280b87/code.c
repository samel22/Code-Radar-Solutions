#include <stdio.h>
int isMonotonic(int arr[], int N) {
    int increasing = 1;
    int decreasing = 1;

    for (int i = 0; i < N - 1; i++) {
        if (arr[i] < arr[i + 1])
            decreasing = 0;
        else if (arr[i] > arr[i + 1])
            increasing = 0;
    }

    return increasing || decreasing;
}

int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    if (isMonotonic(arr, N))
        printf("YES");
    else
        printf("NO");


    return 0;
}
