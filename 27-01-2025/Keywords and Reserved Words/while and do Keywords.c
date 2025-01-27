#include <stdio.h>

int main() {
    int i = 1;
    do {                        // 'do' ensures the block executes at least once
        printf("Value: %d\n", i);
        i++;
    } while (i <= 3);           // 'while' checks condition
    return 0;
}
