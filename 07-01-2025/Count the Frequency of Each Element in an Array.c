#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array
    }

    // Calculate frequencies
    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Avoid counting this element again
            }
        }

        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    // Print frequencies
    printf("Element | Frequency\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d\t   %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
