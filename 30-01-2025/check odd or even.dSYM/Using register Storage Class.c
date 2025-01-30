#include <stdio.h>

int main() {
    register int counter = 10; // Stored in CPU register
    printf("Counter Value: %d\n", counter);
    return 0;
}
