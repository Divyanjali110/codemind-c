#include <stdio.h>
#include <stdbool.h>

bool isUniqueNumber(int num) {
    int digitCount[10] = {0};  // Array to store count of each digit

    while (num > 0) {
        int digit = num % 10;
        digitCount[digit]++;  // Increment count of the current digit
        if (digitCount[digit] > 1) {
            return false;  // Not a unique number
        }
        num /= 10;
    }

    return true;  // All digits are unique
}

int main() {
    int num;

    scanf("%d", &num);

    if (isUniqueNumber(num)) {
        printf("Unique Number
");
    } else {
        printf("Not Unique Number
");
    }

    return 0;
}
