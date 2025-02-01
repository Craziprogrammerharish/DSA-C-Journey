#include <stdio.h>

// Define an enumeration with assigned values
enum WeekDays { MON = 1, TUE, WED, THU = 10, FRI, SAT, SUN };

int main() {
    printf("Thursday is represented as: %d\n", THU);
    printf("Friday is represented as: %d\n", FRI);
    return 0;
}
