// main.c
#include <stdio.h>
extern void greet();
int main() {
    greet();  // Calling greet function from another file
    return 0;
}


// greet.c
#include <stdio.h>
void greet() {
    printf("Hello, World!\n");
}