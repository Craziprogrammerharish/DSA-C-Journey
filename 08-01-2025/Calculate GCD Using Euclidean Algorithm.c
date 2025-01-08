#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a; // Base case: GCD is a when b becomes 0
    return gcd(b, a % b); // Recursive step
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
    return 0;
}
