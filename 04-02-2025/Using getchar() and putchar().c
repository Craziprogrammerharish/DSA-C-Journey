#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    ch = getchar();  // Reads a single character
    printf("You entered: ");
    putchar(ch);  // Prints the character
    return 0;
}
