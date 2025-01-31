#include <stdio.h>

int main() {
    float price = 99.99;
    float tax = 0.05 * price;
    printf("Total Price with Tax: %.2f\n", price + tax);
    return 0;
}
