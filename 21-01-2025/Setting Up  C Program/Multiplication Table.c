#include <stdio.h>
int main() {
    int num = 6;
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);  // Printing multiplication table
    }
    return 0;
}
