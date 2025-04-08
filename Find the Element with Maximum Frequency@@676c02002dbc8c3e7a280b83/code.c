#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    int freq[1000] = {0}; // Assuming numbers are between 0–999

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;  // count frequency
    }

    int maxFreq = 0, result = 1000;
    for (int i = 0; i < 1000; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }

    printf("%d\n", result);
    return 0;
}
