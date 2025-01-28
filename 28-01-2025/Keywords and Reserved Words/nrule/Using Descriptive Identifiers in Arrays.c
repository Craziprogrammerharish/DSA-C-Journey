#include <stdio.h>

int main() {
    int student_scores[3] = {85, 90, 95};  // Descriptive identifier
    for (int i = 0; i < 3; i++) {
        printf("Student %d Score: %d\n", i + 1, student_scores[i]);
    }
    return 0;
}
