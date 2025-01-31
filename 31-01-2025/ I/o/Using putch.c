#include <stdio.h>

int main() {
    char name[] = "Leo";
    for (int i = 0; name[i] != '\0'; i++) {
        putchar(name[i]);
    }
    putchar('\n');
    return 0;
}
