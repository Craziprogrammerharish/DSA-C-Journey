#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest;
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);
    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    // Formula for compound interest
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    printf("The compound interest is: %.2lf\n", compoundInterest);
    return 0;
}
