#include <stdio.h>

int main() {
    char ch;
    printf("Enter characters (press Enter to stop): ");
    while ((ch = getchar()) != '\n') {
        printf("You entered: %c\n", ch);
    }
    return 0;
}
