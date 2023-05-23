#include <stdio.h>

int isStrictlyEven(int arr[], int n) {
    for (int i = 0; i < n; i += 2) {
        if (arr[i] % 2 != 0) {
            return 0;  // Not strictly even
        }
    }
    return 1;  // Strictly even
}

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];
  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = isStrictlyEven(arr, n);
    if (result) {
        printf("True
");
    } else {
        printf("False
");
    }

    return 0;
}
