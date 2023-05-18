#include <stdio.h>

int main() {
    char number[10];
    int i;
    scanf("%s", number);

    // Find the first occurrence of 6
    for (i = 0; number[i] != NULL; i++) {
        if (number[i] == '6') {
            number[i] = '9';  // Change the first 6 to 9
            break;
        }
    }

    printf("%s
", number);

    return 0;
}
