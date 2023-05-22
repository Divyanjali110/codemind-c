#include <stdio.h>

int gcd(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main() {
    int num1, num2;
  
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1, num2);
    printf("%d",result);

    return 0;
}
