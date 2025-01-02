#include <stdio.h>

// Main function
int main() {
    int num1, num2, sum;
    // Prompt the user to enter two integers
    printf("Enter two integers: ");
    // Read the integer inputs from the user and store them in variables 'num1' and 'num2'
    scanf("%d %d", &num1, &num2);
    // Calculate the sum of the two integers
    sum = num1 + num2;
    // Print the sum
    printf("Sum: %d\n", sum);
    // Return 0 to indicate successful execution
    return 0;
}
