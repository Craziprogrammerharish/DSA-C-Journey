#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Store the original number

    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        num /= 10; // Remove the last digit
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    return 0;
}
