#include <stdio.h>

int main() {
    int x = 10; // Global variable
    if (x > 5) {
        int y = 20; // Local variable
        printf("x: %d, y: %d\n", x, y);
    }
    // printf("%d", y); // Uncommenting this will cause an error
    return 0;
}
