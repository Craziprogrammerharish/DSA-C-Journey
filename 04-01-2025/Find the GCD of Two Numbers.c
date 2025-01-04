#include <stdio.h>

int main() {
    int a, b, gcd = 1;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; ++i) {
        // Check if i is a common divisor
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    printf("The GCD of %d and %d is: %d\n", a, b, gcd);
    return 0;
}
