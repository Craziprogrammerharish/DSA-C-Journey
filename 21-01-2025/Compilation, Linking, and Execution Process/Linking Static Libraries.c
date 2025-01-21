#include <stdio.h>
extern void myFunction();  // Function from static library
int main() {
    myFunction();  // Link with static library
    return 0;
}
