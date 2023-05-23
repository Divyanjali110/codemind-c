#include <stdio.h>

int isEvenArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            return 0;  // Not an even array
        }
    }
    return 1;  // Even array
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int result = isEvenArray(arr, N);
    if (result) {
        printf("True
");
    } else {
        printf("False
");
    }

    return 0;
}
