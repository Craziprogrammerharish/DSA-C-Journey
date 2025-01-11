#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a; // Base case
    return gcd(b, a % b); // Recursive call
}

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculate and print GCD
    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
    return 0;
}
