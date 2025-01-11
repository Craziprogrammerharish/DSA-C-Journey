#include <stdio.h>
#include <limits.h>

int main() {
    int n, largest, second_largest;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    largest = second_largest = INT_MIN;

    // Find largest and second largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN)
        printf("No second largest element.\n");
    else
        printf("Second largest element: %d\n", second_largest);
    return 0;
}
