#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isPalindrome(char* word) {
    int length = strlen(word);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (tolower(word[start]) != tolower(word[end]))
            return false;
        start++;
        end--;
    }

    return true;
}

int countPalindromeWords(char* input) {
    int count = 0;
    int length = strlen(input);

    // Split the input string into words
    char* word = strtok(input, " ");
    while (word != NULL) {
        if (isPalindrome(word))
            count++;
        word = strtok(NULL, " ");
    }

    return count;
}

int main() {
    char input[100];
    fgets(input, sizeof(input), stdin);

    // Remove the trailing newline character
    input[strcspn(input, "
")] = NULL;

    int palindromeCount = countPalindromeWords(input);
    printf("%d
", palindromeCount);

    return 0;
}
