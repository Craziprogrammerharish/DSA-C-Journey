#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int start = 0, end = 0;
    int n = strlen(str);

    // Reverse each word in the string
    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverseWords(str);

    // Print the reversed words
    printf("String with reversed words: %s\n", str);
    return 0;
}
