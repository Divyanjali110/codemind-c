#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int isStrictlyOdd = 1; // Assume the array is strictly odd initially

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0 && i % 2 == 1) {
            // If an even number exists at an odd index, the array is not strictly odd
            isStrictlyOdd = 0;
            break;
        }
    }

    printf("%s
", isStrictlyOdd ? "True" : "False");

    return 0;
}
