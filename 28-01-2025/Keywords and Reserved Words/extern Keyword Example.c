#include <stdio.h>

extern int value;  // Declaration of an external variable

int main() {
    printf("Value from external variable: %d\n", value);
    return 0;
}

int value = 50;  // Definition of the external variable
