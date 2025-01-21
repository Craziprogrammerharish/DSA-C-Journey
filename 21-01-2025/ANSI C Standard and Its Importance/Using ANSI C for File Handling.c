#include <stdio.h>
int main() {
    FILE *file = fopen("file.txt", "w");  // File handling in ANSI C
    if (file != NULL) {
        fprintf(file, "Hello, File Handling!\n");
        fclose(file);
    }
    return 0;
}
