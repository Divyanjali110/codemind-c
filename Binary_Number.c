#include <stdio.h>

void generateBinary(int n) {
    int binary[n];
    int i;

    // Initialize binary array with all zeros
    for (i = 0; i < n; i++)
        binary[i] = 0;

    // Generate and print binary numbers
    while (1) {
        // Print the current binary number
        for (i = n - 1; i >= 0; i--)
            printf("%d", binary[i]);
        printf("
");

        // Find the rightmost 0 to be flipped
        for (i = 0; i < n; i++) {
            if (binary[i] == 0) {
                binary[i] = 1;
                break;
            }
            binary[i] = 0;
        }

        // Break the loop when all binary numbers are generated
        if (i == n)
            break;
    }
}

int main() {
    int n;

    scanf("%d", &n);


    generateBinary(n);

    return 0;
}
