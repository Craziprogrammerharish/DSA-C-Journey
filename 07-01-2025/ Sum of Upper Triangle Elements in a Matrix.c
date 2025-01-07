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
        }
    }

    // Calculate the sum of the upper triangle
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of upper triangle elements is %d\n", sum);
    return 0;
}
