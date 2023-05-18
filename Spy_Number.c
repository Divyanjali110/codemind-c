#include <stdio.h>

int isSpyNumber(int number) {
    int sum = 0;
    int product = 1;
    int digit;

    while (number > 0) {
        digit = number % 10;
        sum += digit;
        product *= digit;
        number /= 10;
    }

    if (sum == product)
        return 1; // It is a spy number
    else
        return 0; // It is not a spy number
}

int main() {
    int number;
    scanf("%d", &number);

    if (isSpyNumber(number))
        printf("Spy Number
");
    else
        printf("Not Spy Number");

    return 0;
}
