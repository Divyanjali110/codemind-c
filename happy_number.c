#include <stdio.h>
#include <stdbool.h>

int squareSumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

bool isHappyNumber(int num) {
    int slow = num;
    int fast = num;

    do {
        slow = squareSumOfDigits(slow);
        fast = squareSumOfDigits(squareSumOfDigits(fast));
    } while (slow != fast);

    return slow == 1;
}

int main() {
    int num;

  
    scanf("%d", &num);

    if (isHappyNumber(num)) {
        printf("True
");
    } else {
        printf("False");
    }

    return 0;
}
