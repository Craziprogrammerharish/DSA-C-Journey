#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        remainder = binary % 10; // Get the last digit
        decimal += remainder * base; // Calculate the decimal value
        base *= 2; // Update the base (2^n)
        binary /= 10; // Remove the last digit
    }

    printf("The decimal equivalent is: %d\n", decimal);
    return 0;
}
