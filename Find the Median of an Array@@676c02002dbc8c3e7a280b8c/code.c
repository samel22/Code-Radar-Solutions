#include <stdio.h>

void sort(int arr[], int N) {
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

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, N);

    float median;
    if(N % 2 == 1) {
        median = arr[N / 2];
    } else {
        median = (arr[N / 2 - 1] + arr[N / 2]) / 2.0;
    }

    printf("%d\n", median);  // Print without decimal
    return 0;
}
