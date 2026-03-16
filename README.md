#include <stdio.h>

int main() {
    int classes;
    float grade, total = 0.0, gpa;

    printf("GPA Calculator\n");
    printf("Enter number of classes: ");
    scanf("%d", &classes);

    for (int i = 1; i <= classes; i++) {
        printf("Enter grade points for class %d (0.0 - 4.0): ", i);
        scanf("%f", &grade);

        total += grade;
    }

    gpa = total/classes;

    printf("Your GPA is: %.2f\n", gpa);

    return 0;
}
