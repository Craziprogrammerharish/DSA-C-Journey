#include <stdio.h>
extern void greet();  // This will cause a linking error if greet() is not defined in a linked file
int main() {
    greet();
    return 0;
}
