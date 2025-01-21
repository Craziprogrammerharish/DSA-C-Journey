#include <stdio.h>
int main() {
    float principal, rate, time, interest;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    interest = (principal * rate * time) / 100;  // Formula for simple interest
    printf("Simple Interest: %.2f\n", interest);
    return 0;
}
