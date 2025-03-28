#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN; //INT_MIN is often equal to -2,147,483,648, which is the lowest value for a signed 32-bit integer.
    int min = INT_MAX;

    for(int i = 0; i < N; i++) {
        if(max < arr[i]) {
            max = arr[i]; 
        }
        if(min > arr[i]) {
            min = arr[i]; 
        }
    }

   
    printf("%d", min);
    printf(" %d\n", max);

    return 0;
}
