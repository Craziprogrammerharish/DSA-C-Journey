#include <stdio.h>

int main() {
    int num = 5;
    long long factorial = 1;
    
    // This program calculates the factorial of a given number.
    
    for(int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    printf("Factorial of %d = %lld\n", num, factorial);
    return 0;
}
