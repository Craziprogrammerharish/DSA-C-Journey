#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int len;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Reverse the string
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0'; // Null terminate the reversed string

    // Check if the string is a palindrome
    if (strcmp(str, reversed) == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
