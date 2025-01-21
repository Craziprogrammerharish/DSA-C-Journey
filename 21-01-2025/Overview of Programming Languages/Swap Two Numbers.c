#include <stdio.h>
int main() {
    int a = 5, b = 10, temp;
    temp = a;  // Storing value of a in temp
    a = b;     // Assigning value of b to a
    b = temp;  // Assigning value of temp (old a) to b
    printf("a = %d, b = %d\n", a, b);  // Printing swapped values
    return 0;
}
