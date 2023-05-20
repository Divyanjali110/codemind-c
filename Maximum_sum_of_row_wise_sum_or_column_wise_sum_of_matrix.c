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

    // Calculate maximum sum
    int maxSum = 0;

    // Calculate row-wise sums and find the maximum
    for (int i = 0; i < N; i++) {
        int rowSum = 0;
        for (int j = 0; j < M; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
        }
    }

    // Calculate column-wise sums and find the maximum
    for (int j = 0; j < M; j++) {
        int colSum = 0;
        for (int i = 0; i < N; i++) {
            colSum += matrix[i][j];
        }
        if (colSum > maxSum) {
            maxSum = colSum;
        }
    }

    printf("%d
", maxSum);

    return 0;
}
