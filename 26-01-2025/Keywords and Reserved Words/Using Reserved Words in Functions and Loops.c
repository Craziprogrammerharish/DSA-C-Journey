#include <stdio.h>

void displayMessage() {       // 'void' is a keyword indicating no return value
    printf("Welcome to C programming using keywords!\n");
}

int main() {
    for (int i = 1; i <= 3; i++) { // 'for' and 'int' are keywords
        printf("Iteration %d\n", i);
    }

    displayMessage();         // Calling a function
    return 0;
}
