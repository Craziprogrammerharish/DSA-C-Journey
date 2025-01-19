#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Input values
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Print result
    printf("Simple Interest: %.2f\n", interest);
    return 0;
}
