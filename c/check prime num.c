#include <stdio.h>

int main() {
    int num = 29, isPrime = 1;
    
    // This program checks whether a number is prime or not.
    
    for(int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
    return 0;
}
