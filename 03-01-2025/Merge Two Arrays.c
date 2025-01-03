#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], merged[n1 + n2];
    printf("Enter elements of the first array: ");
    for (int i = 0; i < n1; ++i) {
        scanf("%d", &arr1[i]);
        merged[i] = arr1[i]; // Copy first array to merged
    }

    printf("Enter elements of the second array: ");
    for (int i = 0; i < n2; ++i) {
        scanf("%d", &arr2[i]);
        merged[n1 + i] = arr2[i]; // Append second array to merged
    }

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; ++i) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}
 