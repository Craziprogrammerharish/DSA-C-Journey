#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid; // Element found
        else if (arr[mid] < key)
            low = mid + 1; // Search in the right half
        else
            high = mid - 1; // Search in the left half
    }

    return -1; // Element not found
}

int main() {
    int n, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found.\n");

    return 0;
}
