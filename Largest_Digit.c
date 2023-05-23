#include <stdio.h>

int findLargestDigit(int num) {
    int largest = 0;

    while (num != 0) {
        int digit = num % 10;
        if (digit > largest) {
            largest = digit;
        }
        num /= 10;
    }

    return largest;
}

int main() {
    int number;

    scanf("%d", &number);

    int largest = findLargestDigit(number);

    printf("%d
", largest);

    return 0;
}
