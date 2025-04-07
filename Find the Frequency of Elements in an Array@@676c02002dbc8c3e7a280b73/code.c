#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N], freq[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // initialize frequency array
    }

    for (int i = 0; i < N; i++) {
        if (freq[i] != -1) {//number is uncounted till now
            int count = 1;
            for (int j = i + 1; j < N; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;  // Mark as counted for value of j only means now dont check it for other values of i
                }
            }
            freq[i] = count;
        }
    }

    // Output
    for (int i = 0; i < N; i++) {
        if (freq[i] != 0) {
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
