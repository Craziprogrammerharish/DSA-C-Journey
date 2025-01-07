#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        result[k++] = arr1[i++];
    }

    while (j < n2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int n1, n2;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter elements of first sorted array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter elements of second sorted array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int result[n1 + n2];
    mergeArrays(arr1, n1, arr2, n2, result);

    printf("Merged sorted array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }

    printf("\n");
    return 0;
}
