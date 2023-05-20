#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isPalindrome(char* str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (tolower(str[start]) != tolower(str[end]))
            return false;
        start++;
        end--;
    }

    return true;
}

int main() {
    char input[100];
   
    fgets(input, sizeof(input), stdin);

    // Remove the trailing newline character
    input[strcspn(input, "
")] = NULL;

    bool isPalindromeStr = isPalindrome(input);
    if (isPalindromeStr)
        printf("True
");
    else
        printf("False
");

    return 0;
}
