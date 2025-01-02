#include <stdio.h>

// Main function
int main() {
    float principal, rate, time, interest;
    // Prompt the user to enter the principal, rate of interest, and time
    printf("Enter principal, rate of interest, and time: ");
    // Read the float inputs from the user and store them in variables
    scanf("%f %f %f", &principal, &rate, &time);
    // Calculate simple interest
    interest = (principal * rate * time) / 100;
    // Print the calculated interest
    printf("Simple Interest: %.2f\n", interest);
    // Return 0 to indicate successful execution
    return 0;
}
