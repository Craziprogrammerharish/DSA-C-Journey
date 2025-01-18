#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate sum of digits
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    // Print result
    printf("Sum of digits: %d\n", sum);
    return 0;
}
