#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("Positive number\n");  // If number is greater than 0
    } else if (num < 0) {
        printf("Negative number\n");  // If number is less than 0
    } else {
        printf("Zero\n");  // If number is 0
    }
    return 0;
}
