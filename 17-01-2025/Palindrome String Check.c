#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, flag = 1;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Reverse the string
    for (int i = 0; i < len; i++) {
        rev[len - i - 1] = str[i];
    }
    rev[len] = '\0';

    // Check if palindrome
    for (int i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
