#include <stdio.h>

int main() {
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b; // Start with the larger number

    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("The LCM of %d and %d is: %d\n", a, b, max);
            break;
        }
        max++;
    }

    return 0;
}
