#include <stdio.h>

// Main function
int main() {
    int n;
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

    // Initialize the largest element with the first element of the array
    int largest = arr[0];

    // Find the largest element in the array
    for (int i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Print the largest element
    printf("The largest element is: %d\n", largest);

    return 0;
}
