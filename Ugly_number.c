#include <stdio.h>
#include <stdbool.h>

bool isUglyNumber(int num) {
    if (num <= 0) {
        return false;
    }

    while (num % 2 == 0) {
        num /= 2;
    }

    while (num % 3 == 0) {
        num /= 3;
    }

    while (num % 5 == 0) {
        num /= 5;
    }

    return num == 1;
}

int main() {
    int num;

    scanf("%d", &num);

    if (isUglyNumber(num)) {
        printf("Ugly Number
");
    } else {
        printf("Not Ugly Number
");
    }

    return 0;
}
