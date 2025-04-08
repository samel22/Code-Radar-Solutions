#include <stdio.h>

// Helper function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateRight(int arr[], int N, int k) {
    k = k % N;  // In case k > N

    reverse(arr, 0, N - 1);      // Step 1: Reverse the entire array
    reverse(arr, 0, k - 1);      // Step 2: Reverse first k elements
    reverse(arr, k, N - 1);      // Step 3: Reverse the rest
}

int main() {
    int N, k;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    rotateRight(arr, N, k);

    for(int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
