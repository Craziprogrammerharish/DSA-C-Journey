// Convert Decimal to Binary
#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2); // Recursive call
    }
    printf("%d", n % 2); // Print binary digit
}

int main() {
    int num;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary representation: ");
    decimalToBinary(num);
    printf("\n");
    return 0;
}
