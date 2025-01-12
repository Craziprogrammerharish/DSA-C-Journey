#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Helper function to sort a string
void sortString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Sort both strings
    sortString(str1);
    sortString(str2);

    // Check if sorted strings are identical
    if (strcmp(str1, str2) == 0)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
