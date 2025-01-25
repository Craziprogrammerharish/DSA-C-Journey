#include <stdio.h>

int main() {
    const int LIMIT = 5; // Define a constant
    for (int i = 1; i <= LIMIT; i++) {
        printf("Iteration: %d\n", i); // Use constant in a loop
    }
    return 0;
}
