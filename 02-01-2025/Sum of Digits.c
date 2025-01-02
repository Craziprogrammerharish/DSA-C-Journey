#include <stdio.h>

// Main function
int main() {
    int num, sum = 0, remainder;
    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    // Read the integer input from the user and store it in the variable 'num'
    scanf("%d", &num);
    // Calculate the sum of the digits
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    // Print the sum of the digits
    printf("Sum of digits: %d\n", sum);
    // Return 0 to indicate successful execution
    return 0;
}
