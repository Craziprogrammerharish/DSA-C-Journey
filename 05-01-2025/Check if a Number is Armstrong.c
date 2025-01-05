#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;
    // Calculate the sum of the nth powers of digits
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
