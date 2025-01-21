#include <stdio.h>
int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s! Welcome to C Programming.\n", name);  // Greeting the user
    return 0;
}
