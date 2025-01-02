#include <stdio.h>

// Main function
int main() {
    float celsius, fahrenheit;
    // Prompt the user to enter the temperature in Celsius
    printf("Enter temperature in Celsius: ");
    // Read the float input from the user and store it in the variable 'celsius'
    scanf("%f", &celsius);
    // Convert the temperature to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;
    // Print the converted temperature
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    // Return 0 to indicate successful execution
    return 0;
}
