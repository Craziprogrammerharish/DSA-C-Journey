#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;  // Conversion formula
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
