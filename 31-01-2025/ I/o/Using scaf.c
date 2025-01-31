#include <stdio.h>

int main() {
    int age;
    float salary;
    printf("Enter your age and salary: ");
    scanf("%d %f", &age, &salary);
    printf("Age: %d, Salary: %.2f\n", age, salary);
    return 0;
}
