#include <stdio.h>

// Recursive function for factorial
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print factorial
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
