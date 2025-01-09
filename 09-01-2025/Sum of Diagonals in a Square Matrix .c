#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n], sum = 0;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j || i + j == n - 1) {
                sum += matrix[i][j]; // Sum primary and secondary diagonals
            }
        }
    }

    printf("Sum of the diagonals is: %d\n", sum);

    return 0;
}
