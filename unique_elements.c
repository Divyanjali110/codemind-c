#include <stdio.h>

void printUniqueElements(int arr[], int n) {
    int unique[n];  // Array to store unique elements
    int uniqueIndex = 0;  // Index for unique array

    for (int i = 0; i < n; i++) {
        int isUnique = 1;

        // Check if arr[i] is already present in unique array
        for (int j = 0; j < uniqueIndex; j++) {
            if (arr[i] == unique[j]) {
                isUnique = 0;
                break;
            }
        }

        // If arr[i] is unique, add it to the unique array
        if (isUnique) {
            unique[uniqueIndex] = arr[i];
            uniqueIndex++;
        }
    }

    // Print the unique elements
    for (int i = 0; i < uniqueIndex; i++) {
        printf("%d ", unique[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printUniqueElements(arr, n);

    return 0;
}
