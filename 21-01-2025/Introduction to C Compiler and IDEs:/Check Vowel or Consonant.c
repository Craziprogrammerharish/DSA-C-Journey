#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel\n", ch);  // Checking if character is vowel
    } else {
        printf("%c is a consonant\n", ch);  // Else it's a consonant
    }
    return 0;
}
