// Calculate the Sum of Elements in an Array
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to sum
    }

    printf("Sum of the elements is: %d\n", sum);

    return 0;
}
