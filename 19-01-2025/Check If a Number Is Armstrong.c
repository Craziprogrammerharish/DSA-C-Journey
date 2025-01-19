#include <stdio.h>
#include <math.h>

int main() {
    int num, original, rem, sum = 0, digits = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count digits
    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = num;

    // Calculate Armstrong sum
    while (original != 0) {
        rem = original % 10;
        sum += pow(rem, digits);
        original /= 10;
    }

    // Check if Armstrong
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
