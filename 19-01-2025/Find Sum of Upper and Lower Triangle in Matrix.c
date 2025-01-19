#include <stdio.h>

int main() {
    int n;

    // Input size of square matrix
    printf("Enter size of matrix: ");
    scanf("%d", &n);

    int mat[n][n], upperSum = 0, lowerSum = 0;

    // Input matrix
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Calculate sums
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) upperSum += mat[i][j];
            if (i >= j) lowerSum += mat[i][j];
        }
    }

    // Print results
    printf("Upper triangle sum: %d\n", upperSum);
    printf("Lower triangle sum: %d\n", lowerSum);
    return 0;
}
