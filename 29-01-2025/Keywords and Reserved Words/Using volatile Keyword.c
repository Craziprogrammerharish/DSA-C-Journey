#include <stdio.h>

volatile int num = 10; // Variable can change at any time

int main() {
    printf("Value of num: %d\n", num);
    return 0;
}
