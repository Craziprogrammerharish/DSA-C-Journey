#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert to lowercase
        if (ch >= 'a' && ch <= 'z') { // Check if it's a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++; // Count vowels
            else
                consonants++; // Count consonants
        }
    }

    // Print the counts
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}
