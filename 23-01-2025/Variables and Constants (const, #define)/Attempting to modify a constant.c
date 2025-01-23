#include <stdio.h>

int main() {
    const int MAX = 50;
    // MAX = 100;  // Error: Cannot modify a constant
    printf("Constant MAX: %d\n", MAX);
    return 0;
}
