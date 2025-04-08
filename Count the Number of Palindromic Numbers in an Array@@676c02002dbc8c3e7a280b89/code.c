#include <stdio.h>
int isPalindrome(int num) {
    int original = num, reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    return original == reversed;
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }

    printf("%d",count);

    return 0;
}
