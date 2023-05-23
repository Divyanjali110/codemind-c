#include <stdio.h>

int absoluteDifference(int n) {
    int sumOfSquares = 0;
    int squareOfSum = 0;
    int i;

    // Calculate the sum of squares of the first N numbers
    for (i = 1; i <= n; i++) {
        sumOfSquares += (i * i);
    }

    // Calculate the square of the sum of the first N natural numbers
    int sum = (n * (n + 1)) / 2;
    squareOfSum = sum * sum;

    // Calculate the absolute difference
    int difference = sumOfSquares - squareOfSum;
    if (difference < 0)
        difference = -difference;

    return difference;
}

int main() {
    int n;

    scanf("%d", &n);

    int difference = absoluteDifference(n);

    printf("%d
", difference);

    return 0;
}
