#include <stdio.h>
int main() {
    int a, b, sum, diff, prod, quot;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);  // Taking input from the user
    sum = a + b;
    diff = a - b;
    prod = a * b;
    quot = a / b;
    printf("Sum = %d\n", sum);  // Printing the sum
    printf("Difference = %d\n", diff);  // Printing the difference
    printf("Product = %d\n", prod);  // Printing the product
    printf("Quotient = %d\n", quot);  // Printing the quotient
    return 0;
}
