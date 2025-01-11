// Count Frequency of Characters in a String
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; // Array to store frequency of characters

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Count character frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Print character frequencies
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0)
            printf("%c: %d\n", i, freq[i]);
    }
    return 0;
}
