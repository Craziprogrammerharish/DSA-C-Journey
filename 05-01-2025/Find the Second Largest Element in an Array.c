#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0], second_largest = -1;

    for (int i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            second_largest = largest; // Update second largest
            largest = arr[i]; // Update largest
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i]; // Update second largest
        }
    }

    printf("The second largest element is: %d\n", second_largest);
    return 0;
}
