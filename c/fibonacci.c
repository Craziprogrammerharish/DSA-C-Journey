#include <stdio.h>

int main() {
    int n = 10, first = 0, second = 1, next;
    
    // This program prints the Fibonacci sequence up to `n` terms.
    
    printf("Fibonacci Series: %d, %d, ", first, second);
    for(int i = 3; i <= n; ++i) {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
    }
    return 0;
}
