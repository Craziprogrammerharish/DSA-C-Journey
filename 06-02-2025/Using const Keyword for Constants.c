#include <stdio.h>

int main() {
    const float GRAVITY = 9.81;  // Defining a constant using const
    float mass = 50.0;
    float weight = mass * GRAVITY;

    printf("Weight of the object: %.2f N\n", weight);
    return 0;
}
