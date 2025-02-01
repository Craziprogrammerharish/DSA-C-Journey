#include <stdio.h>

// Define an enumeration for colors
enum Colors { RED, GREEN, BLUE };

int main() {
    enum Colors myColor = GREEN;
    printf("Selected color index: %d\n", myColor);
    return 0;
}
