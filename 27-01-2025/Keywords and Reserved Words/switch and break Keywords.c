#include <stdio.h>

int main() {
    int choice = 2;
    switch (choice) {           // 'switch' keyword for branching
        case 1:
            printf("Choice is 1\n");
            break;              // 'break' to exit the switch block
        case 2:
            printf("Choice is 2\n");
            break;
        default:
            printf("Invalid Choice\n");
    }
    return 0;
}
