#include <stdio.h>
#include <stdlib.h>

void findMinDiffPair(int N, int arr[]) {
    if (N < 2) {
        printf("-1");
        return;
    }

    int minDiff = abs(arr[0] - arr[1]);
    int a = arr[0], b = arr[1];

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int diff = abs(arr[i] - arr[j]);

            int x = arr[i], y = arr[j];
            if (x > y) { int temp = x; x = y; y = temp; } // sort the pair in ascending order

            if (diff < minDiff || (diff == minDiff && (x < a || (x == a && y < b)))) {
                minDiff = diff; //if we find another pair which has same mindiff as current pair but numbers of that pair< current pair then we use that pair
                a = x;
                b = y;
            }
        }
    }

    printf("%d %d\n", a, b);
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    findMinDiffPair(N, arr);
}
