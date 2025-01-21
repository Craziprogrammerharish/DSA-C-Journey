#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        sum += num % 10;  // Adding the last digit of num
        num /= 10;  // Removing the last digit
    }
    printf("Sum of digits = %d\n", sum);  // Printing sum
    return 0;
}
