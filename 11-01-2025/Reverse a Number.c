#include <stdio.h>

int main() {
    int num, reverse = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reverse);
    return 0;
}
