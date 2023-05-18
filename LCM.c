#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    int gcdValue = gcd(a, b);
    return (a * b) / gcdValue;
}

int main() {
    int num1, num2;

    scanf("%d", &num1);

    scanf("%d", &num2);

    int lcmValue = lcm(num1, num2);

    printf("%d",lcmValue);

    return 0;
}
