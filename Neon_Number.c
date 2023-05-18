#include <stdio.h>

int isNeonNumber(int num) {
    int square = num * num;
    int sum = 0;

    // Calculate the sum of digits in the square
    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == num) {
        return 1;  // Neon number
    } else {
        return 0;  // Not a neon number
    }
}

int main() {
    int number;
    scanf("%d", &number);

    if (isNeonNumber(number)) {
        printf("Neon Number
");
    } else {
        printf("Not Neon Number");
    }

    return 0;
}
