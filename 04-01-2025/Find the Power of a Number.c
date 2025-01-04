#include <stdio.h>

// Function to calculate power
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base; // Multiply base by itself exponent times
    }
    return result;
}

int main() {
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    printf("%d raised to the power %d is: %d\n", base, exponent, power(base, exponent));
    return 0;
}
