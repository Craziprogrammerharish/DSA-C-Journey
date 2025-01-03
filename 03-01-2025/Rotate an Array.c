#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Rotated array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[(i + k) % n]);
    }
    printf("\n");
    return 0;
}
