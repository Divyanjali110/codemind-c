#include <stdio.h>

int findSumOfNaturalNumbers(int n) {
    int sum = 0;
    int i;

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int n;

    scanf("%d", &n);

    int sum = findSumOfNaturalNumbers(n);
    printf("%d
",sum);

    return 0;
}
