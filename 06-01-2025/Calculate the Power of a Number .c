#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent, result;
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent); // Use pow function
    printf("%.2lf raised to the power of %.2lf is: %.2lf\n", base, exponent, result);

    return 0;
}
