#include <stdio.h>
#define PI 3.14159

// Main function
int main() {
    float radius, area;
    // Prompt the user to enter the radius of the circle
    printf("Enter the radius of the circle: ");
    // Read the float input from the user and store it in the variable 'radius'
    scanf("%f", &radius);
    // Calculate the area of the circle
    area = PI * radius * radius;
    // Print the calculated area
    printf("Area of the circle: %.2f\n", area);
    // Return 0 to indicate successful execution
    return 0;
}
