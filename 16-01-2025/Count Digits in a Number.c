#include <stdio.h>

int main() {
    int num, count = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Count digits
    while (num != 0) {
        num /= 10;
        count++;
    }

    // Print result
    printf("Number of digits: %d\n", count);
    return 0;
}
