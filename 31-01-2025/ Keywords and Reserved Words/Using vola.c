#include <stdio.h>

volatile int sensorData = 100; // Volatile variable

int main() {
    printf("Sensor Data: %d\n", sensorData);
    return 0;
}
