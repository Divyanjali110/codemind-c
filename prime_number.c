#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;

    scanf("%d", &number);

    if (isPrime(number)) {
        printf("prime");
    } else {
        printf("not a prime");
    }

    return 0;
}
