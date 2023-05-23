#include <stdio.h>

int countUniqueOddElements(int arr[], int n) {
    int count = 0;
    int freq[100] = {0};  // Assuming array elements are within the range 0-99
    
    // Count the frequency of odd elements
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            freq[arr[i]]++;
        }
    }
    
    // Count the unique odd elements
    for (int i = 0; i < 100; i++) {
        if (freq[i] > 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int n;
  
    scanf("%d", &n);
    
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int uniqueOddCount = countUniqueOddElements(arr, n);
    printf("%d
", uniqueOddCount);
    
    return 0;
}
