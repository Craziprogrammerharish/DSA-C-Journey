#include <stdio.h>

// Recursive function to calculate the sum of array elements
int sumArray(int arr[], int n) {
    if (n == 0) return 0; // Base case
    return arr[n - 1] + sumArray(arr, n - 1); // Recursive call
}

int main() {
    int n;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate and print the sum
    printf("Sum of array elements: %d\n", sumArray(arr, n));
    return 0;
}
