#include <stdio.h>

int isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;

    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int number;

    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
