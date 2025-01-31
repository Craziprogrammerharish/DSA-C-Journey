#include <stdio.h>

void demoFunction() {
    static int count = 0; // Static variable retains value between function calls
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    demoFunction();
    demoFunction();
    demoFunction();
    return 0;
}
