#include <stdio.h>

void findPrimeFactors(int num) {
    printf("Prime factors: ");
    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
    if (num > 1) printf("%d", num); // Print remaining prime factor
    printf("\n");
}

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find and print prime factors
    findPrimeFactors(num);
    return 0;
}
