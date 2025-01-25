#include <stdio.h>
#define PI 3.14159
#define AREA(radius) (PI * radius * radius) // Macro for circle area

int main() {
    float radius = 4.5;
    printf("Area of Circle: %.2f\n", AREA(radius)); // Calculate area
    return 0;
}
