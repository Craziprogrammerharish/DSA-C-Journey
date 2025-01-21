// file1.c
#include <stdio.h>
void hello() {
    printf("Hello from file1.c\n");
}


// file2.c
#include <stdio.h>
void hello();
int main() {
    hello();
    return 0;
}
