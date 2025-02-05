#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) 
        return n; // Base case: return n if it's 0 or 1
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}
