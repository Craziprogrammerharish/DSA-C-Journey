#include <stdio.h>

// Recursive function to find the sum of natural numbers
int sumOfNaturalNumbers(int n) {
    if (n == 0)
        return 0; // Base case: sum of 0 is 0
    return n + sumOfNaturalNumbers(n - 1); // Recursive case
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers is %d\n", n, sumOfNaturalNumbers(n));
    return 0;
}
