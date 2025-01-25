#include <stdio.h>
#define DISCOUNT 10

int main() {
    int price = 1000;
    int final_price = price - DISCOUNT;
    printf("Final Price after discount: %d\n", final_price); // Display result
    return 0;
}
