#include <stdio.h>

int main() {
    int num, binary[32], index = 0;

    // Input number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Convert to binary
    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }

    // Print binary number
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}
