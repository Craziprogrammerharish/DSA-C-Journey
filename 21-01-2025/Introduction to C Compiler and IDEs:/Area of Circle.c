#include <stdio.h>
#include <math.h>  // For mathematical functions
int main() {
    float radius, area;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area = M_PI * radius * radius;  // Using constant M_PI for pi
    printf("Area of Circle: %.2f\n", area);
    return 0;
}
