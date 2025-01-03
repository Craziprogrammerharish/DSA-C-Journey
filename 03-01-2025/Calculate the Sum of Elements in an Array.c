#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], sum = 0;
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to the sum
    }

    printf("The sum of the elements is: %d\n", sum);
    return 0;
}
