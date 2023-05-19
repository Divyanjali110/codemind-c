#include <stdio.h>

int reverseNumber(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int square(int num) {
    return num * num;
}

int isAdamNumber(int num) {
    int originalSquare = square(num);
    int reversedSquare = square(reverseNumber(num));
    
    return originalSquare == reverseNumber(reversedSquare);
}

int main() {
    int number;
    scanf("%d", &number);
    
    if (isAdamNumber(number)) {
        printf("True");
    } else {
        printf("False");
    }
    
    return 0;
}
