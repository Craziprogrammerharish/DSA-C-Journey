//Calculate Factorial Using Recursion
#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) return 1; // Base case
    return n * factorial(n - 1);    // Recursive call
}

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print factorial
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
