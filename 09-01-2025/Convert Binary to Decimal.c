#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base; // Add the weighted digit
        binary /= 10;
        base *= 2; // Increment the base
    }

    printf("Decimal equivalent is: %d\n", decimal);

    return 0;
}
