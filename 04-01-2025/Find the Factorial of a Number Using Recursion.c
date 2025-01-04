#include <stdio.h>

// Function to calculate factorial recursively
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive step
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The factorial of %d is: %d\n", num, factorial(num));
    return 0;
}
