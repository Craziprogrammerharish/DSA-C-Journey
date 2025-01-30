#include <stdio.h>

int main() {
    void *ptr;  // Void pointer
    int x = 10;
    ptr = &x;
    printf("Pointer Value: %d\n", *(int *)ptr);
    return 0;
}
