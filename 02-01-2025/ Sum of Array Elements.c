#include <stdio.h>

// Main function
int main() {
    int n, sum = 0;
    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    // Read the integer input from the user and store it in the variable 'n'
    scanf("%d", &n);
    int arr[n];
    // Prompt the user to enter the elements of the array
    printf("Enter %d elements: ", n);
    // Read the elements of the array from the user
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    // Calculate the sum of the elements
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    // Print the sum of the elements
    printf("Sum of array elements: %d\n", sum);
    // Return 0 to indicate successful execution
    return 0;
}
