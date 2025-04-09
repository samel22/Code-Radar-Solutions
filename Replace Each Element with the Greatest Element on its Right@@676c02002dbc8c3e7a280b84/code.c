#include <stdio.h>

void replace(int N, int arr[]) {
    int max = arr[N - 1]; //max is last element throughout
    arr[N - 1] = -1; // Last element becomes -1

    for (int i = N - 2; i >= 0; i--) {
        int temp = arr[i];
        arr[i] = max; //max is last element throughout

        if (temp > max) {
            max = temp;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    replace(N, arr);

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
