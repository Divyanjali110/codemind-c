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

    // Calculate sum of all elements
    int sum = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            sum += matrix[i][j];
        }
    }

    printf("%d
", sum);

    return 0;
}
