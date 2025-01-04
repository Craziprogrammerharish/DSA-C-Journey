#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        num /= 10; // Remove the last digit
        count++;
    }

    printf("The number of digits is: %d\n", count);
    return 0;
}
