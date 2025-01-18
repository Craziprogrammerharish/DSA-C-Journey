#include <stdio.h>

int main() {
    int n;

    // Input size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0], smallest = arr[0];

    // Find largest and smallest
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Print results
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
    return 0;
}
