#include <stdio.h>
#include <string.h>  // For string functions
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);  // Calculating string length
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);  // Printing characters in reverse order
    }
    printf("\n");
    return 0;
}
