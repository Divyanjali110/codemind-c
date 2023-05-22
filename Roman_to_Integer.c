#include <stdio.h>

int romanToInt(char *roman) {
    int num = 0;
    int i = 0;

    while (roman[i] != NULL) {
        int current = 0;
        int next = 0;

        if (roman[i] == 'I')
            current = 1;
        else if (roman[i] == 'V')
            current = 5;
        else if (roman[i] == 'X')
            current = 10;
        else if (roman[i] == 'L')
            current = 50;
        else if (roman[i] == 'C')
            current = 100;
        else if (roman[i] == 'D')
            current = 500;
        else if (roman[i] == 'M')
            current = 1000;

        if (roman[i + 1] != NULL) {
            if (roman[i + 1] == 'I')
                next = 1;
            else if (roman[i + 1] == 'V')
                next = 5;
            else if (roman[i + 1] == 'X')
                next = 10;
            else if (roman[i + 1] == 'L')
                next = 50;
            else if (roman[i + 1] == 'C')
                next = 100;
            else if (roman[i + 1] == 'D')
                next = 500;
            else if (roman[i + 1] == 'M')
                next = 1000;
        }

        if (current >= next)
            num += current;
        else
            num -= current;

        i++;
    }

    return num;
}

int main() {
    char roman[100];

    scanf("%s", roman);

    int result = romanToInt(roman);
    printf("%d
", result);

    return 0;
}
