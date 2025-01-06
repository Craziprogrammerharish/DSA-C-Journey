#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]); // Convert character to lowercase
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++; // Increment vowel count
        }
    }

    printf("The number of vowels is: %d\n", count);
    return 0;
}
