#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++; // Increment vowel count
            else
                consonants++; // Increment consonant count
        }
    }

    // Print counts
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}
