#include <stdio.h>

int isPalindrome(int num) {
    int reversedNum = 0, originalNum, remainder;
    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum)
        return 1;  // Number is a palindrome
    else
        return 0;  // Number is not a palindrome
}

int main() {
    int number;

    scanf("%d", &number);

    if (isPalindrome(number))
        printf("True");
    else
        printf("False
");

    return 0;
}
