#include <stdio.h>

int main() {
    int num, sum = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10; // Get the last digit
        sum += remainder; // Add it to the sum
        num /= 10; // Remove the last digit
    }

    printf("The sum of digits is: %d\n", sum);
    return 0;
}
