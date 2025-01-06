#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    while (a != b) {
        if (a > b) {
            a -= b; // Subtract smaller number from the larger
        } else {
            b -= a;
        }
    }

    printf("GCD is %d\n", a); // Both values will now be the GCD
    return 0;
}
