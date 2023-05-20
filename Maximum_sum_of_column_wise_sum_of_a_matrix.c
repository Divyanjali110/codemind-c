#include <stdio.h>

#define MAX_SIZE 10

int findMaxColumnSum(int matrix[MAX_SIZE][MAX_SIZE], int N, int M) {
    int maxSum = 0;

    for (int j = 0; j < M; j++) {
        int columnSum = 0;
        for (int i = 0; i < N; i++) {
            columnSum += matrix[i][j];
        }
        if (columnSum > maxSum) {
            maxSum = columnSum;
        }
    }

    return maxSum;
}

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

    // Find the maximum sum of column-wise sums
    int maxColumnSum = findMaxColumnSum(matrix, N, M);

    printf("%d
", maxColumnSum);

    return 0;
}
