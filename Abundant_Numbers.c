#include <stdio.h>

int isAbundant(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum > num;
}

int main() {
    int number;
    
    scanf("%d", &number);

    if (isAbundant(number)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
