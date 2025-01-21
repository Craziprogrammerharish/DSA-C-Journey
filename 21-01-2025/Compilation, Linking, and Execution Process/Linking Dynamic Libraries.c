#include <stdio.h>
extern void dynamicFunction();  // Function from dynamic library
int main() {
    dynamicFunction();  // Link with dynamic library
    return 0;
}
