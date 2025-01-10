#include <stdio.h>

int isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0; // Check using bitwise AND
}

int main() {
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and display result
    if (isPowerOfTwo(num)) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }
    return 0;
}
