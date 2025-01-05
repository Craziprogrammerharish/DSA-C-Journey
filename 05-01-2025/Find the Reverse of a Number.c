#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reverse = reverse * 10 + remainder; // Append it to reverse
        num /= 10; // Remove the last digit
    }

    printf("The reverse is: %d\n", reverse);
    return 0;
}
