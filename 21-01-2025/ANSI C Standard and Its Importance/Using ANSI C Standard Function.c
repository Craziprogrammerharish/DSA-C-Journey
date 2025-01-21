#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr = (int *)malloc(5 * sizeof(int));  // Memory allocation using ANSI C standard
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    free(arr);  // Freeing allocated memory
    return 0;
}
