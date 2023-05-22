#include <stdio.h>

int calculateProduct(int number) {
    int product = 1;

    while (number > 0) {
        int digit = number % 10;
        product *= digit;
        number /= 10;
    }

    return product;
}

int calculateSum(int number) {
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    return sum;
}

int main() {
    int number;

    scanf("%d", &number);

    int product = calculateProduct(number);
    int sum = calculateSum(number);

    int result = product - sum;

    printf("%d
", result);

    return 0;
}
