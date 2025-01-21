#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);
    int flag = 0;
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;  // If characters do not match
            break;
        }
    }
    if (flag) {
        printf("Not a palindrome\n");
    } else {
        printf("Palindrome\n");
    }
    return 0;
}
