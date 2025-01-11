#include <stdio.h>

int main() {
    int rows;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generate Pascal's triangle
    for (int i = 0; i < rows; i++) {
        int num = 1; // Initialize first element
        for (int j = 0; j <= i; j++) {
            printf("%d ", num); // Print the current element
            num = num * (i - j) / (j + 1); // Compute the next element
        }
        printf("\n");
    }
    return 0;
}
