#include <stdio.h>

// Function to calculate Fibonacci number
int fibonacci(int n) {
    if (n == 0) return 0; // Base case 1
    if (n == 1) return 1; // Base case 2
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main() {
    int n;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print Fibonacci series
    printf("Fibonacci series:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
