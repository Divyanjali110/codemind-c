#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int isStrongNumber(int number) {
    int originalNumber = number;
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }

    return (sum == originalNumber);
}

int main() {
    int number;

  
    scanf("%d", &number);

    if (isStrongNumber(number))
        printf("The number %d is a strong number
", number);
    else
        printf("The number %d is not a strong number
", number);

    return 0;
}
