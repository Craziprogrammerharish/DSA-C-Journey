#include <stdio.h>

int main() {
    int num = 10;
    if (num == 10) {
        goto success; // Jump to the label
    }
    printf("This will not be printed.\n");
    success:
        printf("Goto successful. Num = %d\n", num);
    return 0;
}
