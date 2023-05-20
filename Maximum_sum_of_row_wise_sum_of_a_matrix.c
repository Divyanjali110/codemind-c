#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int N, M;
    int matrix[MAX_SIZE][MAX_SIZE];

    scanf("%d", &N);

 
    scanf("%d", &M);

    // Input matrix elements

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the maximum sum of row-wise sums
    int maxSum = 0;

    for (int i = 0; i < N; i++) {
        int rowSum = 0;
        for (int j = 0; j < M; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
        }
    }

    printf("%d
", maxSum);

    return 0;
}
