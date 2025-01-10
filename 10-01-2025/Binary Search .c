#include <stdio.h>

// Binary search function
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) return mid;    // Key found
        else if (arr[mid] < key) low = mid + 1; // Search right half
        else high = mid - 1;               // Search left half
    }
    return -1; // Key not found
}

int main() {
    int n, key;

    // Input array size and elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key to search
    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Perform binary search
    int result = binarySearch(arr, n, key);
    if (result != -1)
        printf("Element found at index %d.\n", result);
    else
        printf("Element not found.\n");
    return 0;
}
