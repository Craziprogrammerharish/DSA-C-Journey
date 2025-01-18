#include <stdio.h>

int main() {
    int base, exp, result = 1;

    // Input base and exponent
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    // Calculate power
    for (int i = 1; i <= exp; i++) {
        result *= base;
    }

    // Print result
    printf("%d^%d = %d\n", base, exp, result);
    return 0;
}
