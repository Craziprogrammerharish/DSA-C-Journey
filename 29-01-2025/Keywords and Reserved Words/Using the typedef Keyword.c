#include <stdio.h>

// Creating an alias for unsigned int
typedef unsigned int uint;

int main() {
    uint age = 25; // Using typedef alias
    printf("Age: %u\n", age);
    return 0;
}
