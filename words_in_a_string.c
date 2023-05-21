#include <stdio.h>

int countWords(char *str) {
    int count = 0;
    int i = 0;
    int isWord = 0;

    while (str[i] != NULL) {
        if (str[i] == ' ' || str[i] == '
' || str[i] == '	') {
            isWord = 0;
        } else if (isWord == 0) {
            isWord = 1;
            count++;
        }
        i++;
    }

    return count;
}

int main() {
    char str[100];

   
    fgets(str, sizeof(str), stdin);

    // Count the number of words
    int wordCount = countWords(str);

    // Display the count of words
    printf("%d
", wordCount);

    return 0;
}
