#include <stdio.h>

// Main function
int main() {
    int num, reversed = 0, remainder;
    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    // Read the integer input from the user and store it in the variable 'num'
    scanf("%d", &num);
    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    // Print the reversed number
    printf("Reversed number: %d\n", reversed);
    // Return 0 to indicate successful execution
    return 0;
}
