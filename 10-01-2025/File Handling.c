#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100], ch;
    int word_count = 0;
    int in_word = 0;

    // Input file name
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Count words in the file
    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch)) {
            in_word = 0; // End of a word
        } else if (in_word == 0) {
            in_word = 1; // Start of a new word
            word_count++;
        }
    }

    // Print the word count
    printf("Total words in the file: %d\n", word_count);
    fclose(file);
    return 0;
}
