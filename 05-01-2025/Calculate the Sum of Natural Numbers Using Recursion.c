#include <stdio.h>

// Function to calculate sum recursively
int sumOfNatural(int n) {
    if (n == 0) return 0; // Base case
    return n + sumOfNatural(n - 1); // Recursive step
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("The sum of the first %d natural numbers is: %d\n", n, sumOfNatural(n));
    return 0;
}
