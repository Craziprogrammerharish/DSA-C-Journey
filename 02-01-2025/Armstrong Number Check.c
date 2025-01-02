#include <stdio.h>
#include <math.h>

// Main function
int main() {
    int num, original, remainder, result = 0, n = 0;
    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    // Read the integer input from the user and store it in the variable 'num'
    scanf("%d", &num);
    // Store the original number
    original = num;
    // Find the number of digits in the number
    while (original != 0) {
        original /= 10;
        ++n;
    }
    // Restore the original number
    original = num;
    // Calculate the sum of the nth power of each digit
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }
    // Check if the original number is equal to the result
    if (result == num) {
        // Print that the number is an Armstrong number
        printf("%d is an Armstrong number.\n", num);
    } else {
        // Print that the number is not an Armstrong number
        printf("%d is not an Armstrong number.\n", num);
    }
    // Return 0 to indicate successful execution
    return 0;
}
