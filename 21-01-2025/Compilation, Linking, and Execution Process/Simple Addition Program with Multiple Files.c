// add.c
#include <stdio.h>
int add(int a, int b) {
    return a + b;  // Adding two numbers
}



// main.c
#include <stdio.h>
extern int add(int, int);  // Declaring add function from another file
int main() {
    int result = add(5, 10);
    printf("Sum = %d\n", result);
    return 0;
}
