#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the target sum: ");
    scanf("%d", &sum);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Pairs with sum %d:\n", sum);
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == sum) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}
