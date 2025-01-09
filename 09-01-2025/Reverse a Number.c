#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        reversed = reversed * 10 + num % 10; // Reverse the digits
        num /= 10;
    }

    printf("Reversed number is: %d\n", reversed);

    return 0;
}
