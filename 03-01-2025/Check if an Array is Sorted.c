#include <stdio.h>

int main() {
    int n, sorted = 1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            sorted = 0; // Array is not sorted
            break;
        }
    }

    if (sorted) {
        printf("The array is sorted.\n");
    } else {
        printf("The array is not sorted.\n");
    }
    return 0;
}
