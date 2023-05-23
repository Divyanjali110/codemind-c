#include <stdio.h>

int isUnique(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            return 0;  // Not unique
        }
    }
    return 1;  // Unique
}

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (isUnique(arr, i, arr[i])) {
            sum += arr[i];
        }
    }

    printf("%d
", sum);

    return 0;
}
