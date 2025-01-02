#include <stdio.h>

// Main function
int main() {
    int year;
    // Prompt the user to enter a year
    printf("Enter a year: ");
    // Read the integer input from the user and store it in the variable 'year'
    scanf("%d", &year);
    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        // Print that the year is a leap year
        printf("%d is a leap year.\n", year);
    } else {
        // Print that the year is not a leap year
        printf("%d is not a leap year.\n", year);
    }
    // Return 0 to indicate successful execution
    return 0;
}
