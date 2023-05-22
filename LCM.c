#include <stdio.h>

int gcd(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int lcm(int num1, int num2) {
    int gcdValue = gcd(num1, num2);
    int lcmValue = (num1 * num2) / gcdValue;
    return lcmValue;
}

int main() {
    int num1, num2;


    scanf("%d %d", &num1, &num2);

    int lcmValue = lcm(num1, num2);

    printf("%d",lcmValue);

    return 0;
}
