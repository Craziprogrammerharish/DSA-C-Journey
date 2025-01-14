#include <stdio.h>

int main() {
    int start, end, flag;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (i <= 1) continue; // Skip 0 and 1 as they are not prime

        flag = 1; // Assume the number is prime
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0; // Mark as not prime
                break;
            }
        }

        if (flag) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
