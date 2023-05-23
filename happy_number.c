#include <stdio.h>

int isHappyNumber(int num) {
    int sum, digit;

    while (num != 1 && num != 4) {
        sum = 0;
        while (num > 0) {
            digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        num = sum;
    }

    if (num == 1)
        return 1;  // Number is a happy number
    else
        return 0;  // Number is not a happy number
}

int main() {
    int number;

    scanf("%d", &number);

    if (isHappyNumber(number))
        printf("True");
    else
        printf("False");

    return 0;
}
