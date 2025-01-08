#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;

    while (num != 0) {
        digits++;
        num /= 10;
    }

    num = original;
    while (num != 0) {
        sum += pow(num % 10, digits);
        num /= 10;
    }

    return sum == original;
}

int main() {
    int start, end;

    printf("Enter the starting and ending values: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
