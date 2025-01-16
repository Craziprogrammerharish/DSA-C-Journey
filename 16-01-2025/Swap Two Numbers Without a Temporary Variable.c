#include <stdio.h>

int main() {
    int a, b;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap numbers
    a = a + b;
    b = a - b;
    a = a - b;

    // Print swapped numbers
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
