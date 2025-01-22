#include <stdio.h>

enum Color { RED, GREEN, BLUE };  // enum is a keyword
int main() {
    enum Color favoriteColor = GREEN;
    printf("Favorite color code: %d\n", favoriteColor);
    return 0;
}
