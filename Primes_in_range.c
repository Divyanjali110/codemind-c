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

int countPrimesInRange(int m, int n) {
    int count = 0;

    for (int i = m; i <= n; i++) {
        if (isPrime(i)) {
            count++;
        }
    }

    return count;
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int primeCount = countPrimesInRange(m, n);
    printf("%d",primeCount);

    return 0;
}
