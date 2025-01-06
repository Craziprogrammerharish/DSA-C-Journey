#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reverse[100];
    printf("Enter a string: ");
    scanf("%s", str);

    // Copy the string and reverse it
    strcpy(reverse, str);
    strrev(reverse);

    // Compare original and reversed strings
    if (strcmp(str, reverse) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
