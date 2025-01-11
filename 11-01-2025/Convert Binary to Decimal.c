#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, base = 0;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Convert binary to decimal
    while (binary > 0) {
        int last_digit = binary % 10;
        decimal += last_digit * pow(2, base);
        binary /= 10;
        base++;
    }

    // Print the decimal equivalent
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
