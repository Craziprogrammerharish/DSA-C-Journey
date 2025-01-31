#include <stdio.h>

struct Student {
    const int rollNumber;
    char name[50];
};

int main() {
    struct Student s1 = {101, "Leo"};
    printf("Roll Number: %d, Name: %s\n", s1.rollNumber, s1.name);
    return 0;
}
