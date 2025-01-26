#include <stdio.h>

int main() {
    int valid_1 = 10;         // Valid identifier: starts with a letter, uses underscore
    float _validFloat = 5.5;  // Valid identifier: starts with an underscore
    // int 1invalid = 20;     // Invalid identifier: starts with a digit (uncomment to see error)

    printf("Valid Integer: %d\n", valid_1);
    printf("Valid Float: %.2f\n", _validFloat);
    return 0;
}
