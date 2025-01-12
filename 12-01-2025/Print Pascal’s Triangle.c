#include <stdio.h>

int main() {
    int rows;

    // Input number of rows for Pascal's Triangle
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        int coeff = 1; // Initialize first coefficient

        for (int space = 1; space <= rows - i; space++)
            printf("  "); // Print spaces for alignment

        for (int j = 0; j <= i; j++) {
            printf("%4d", coeff); // Print coefficient
            coeff = coeff * (i - j) / (j + 1); // Calculate next coefficient
        }
        printf("\n");
    }

    return 0;
}
