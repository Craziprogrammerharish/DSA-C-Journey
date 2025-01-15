#include <stdio.h>

int main() {
    int num, flag = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if prime
    if (num <= 1) {
        flag = 0;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    // Print result
    if (flag) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
