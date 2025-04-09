#include <stdio.h>

void sort(int arr[], int N) {
    // Simple bubble sort
    for(int i = 0; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

float findMedian(int arr[], int N) {
    sort(arr, N);  // Sort array first

    if(N % 2 == 1) {
        return arr[N / 2]; // Middle element is center
    } else {
        return (arr[N / 2 - 1] + arr[N / 2]) / 2.0; // Average of two middle if N!/2
    }
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    float median = findMedian(arr, N);
    printf("%.1f\n", median);

    return 0;
}
