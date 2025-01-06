#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        int val = 1; // Initialize first value in the row
        for (int space = 1; space < rows - i; space++) {
            printf("  "); // Print leading spaces
        }
        for (int j = 0; j <= i; j++) {
            printf("%4d", val); // Print the value
            val = val * (i - j) / (j + 1); // Compute next value
        }
        printf("\n"); // Move to next row
    }
    return 0;
}
