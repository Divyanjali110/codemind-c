#include <stdio.h>

int reverseInteger(int n) {
    int reversedNum = 0;

    while (n != 0) {
        int digit = n % 10;
        reversedNum = reversedNum * 10 + digit;
        n /= 10;
    }

    return reversedNum;
}

int main() {
    int N;
    
    scanf("%d", &N);

    int reversed = reverseInteger(N);

    printf("%d
", reversed);

    return 0;
}
