#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    ch = getchar();  // Taking a character input
    printf("You entered: ");
    putchar(ch);  // Printing the entered character

    return 0;
}
