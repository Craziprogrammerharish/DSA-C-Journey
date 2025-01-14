#include <stdio.h>

int main() {
    int n, first, second;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    first = second = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    // Print result
    if (second == -1) {
        printf("No second largest element found.\n");
    } else {
        printf("Second largest element: %d\n", second);
    }
    return 0;
}
