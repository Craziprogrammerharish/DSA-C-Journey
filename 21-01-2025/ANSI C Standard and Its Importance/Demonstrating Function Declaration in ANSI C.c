#include <stdio.h>
extern void display();  // Function declaration
int main() {
    display();  // Function call
    return 0;
}
void display() {
    printf("This is a function demonstration\n");
}
