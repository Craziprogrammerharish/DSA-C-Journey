#include <stdio.h>

// Main function
int main() {
    int num, reversed = 0, original, remainder;
    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    // Read the integer input from the user and store it in the variable 'num'
    scanf("%d", &num);
    // Store the original number
    original = num;
    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    // Check if the original number is equal to the reversed number
    if (original == reversed) {
        // Print that the number is a palindrome
        printf("%d is a palindrome.\n", original);
    } else {
        // Print that the number is not a palindrome
        printf("%d is not a palindrome.\n", original);
    }
    // Return 0 to indicate successful execution
    return 0;
}
