#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 10, y = 20;
    swap(&x, &y);  // Swapping values using function
    printf("After swapping, x = %d, y = %d\n", x, y);
    return 0;
}
