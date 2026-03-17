#include <stdio.h>

int main() 
{
    int classes;

    printf("GPA Calculator\n");
    printf("Enter number of classes: ");
    scanf("%d", &classes);

    if (classes <= 0) 
    {
        printf("Invalid number of classes.\n");
        return 1;
    }

    float grade, total = 0.0, gpa;

    for (int i = 1; i <= classes; i++) 
    {
        printf("Enter grade points for class %d (0.0 - 4.0): ", i);
        scanf("%f", &grade);

        if (grade < 0.0 || grade > 4.0) 
        {
            printf("Invalid grade entered. Please enter a value between 0.0 and 4.0.\n");
            i--;
            continue;
        }

        total += grade;
    }

    gpa = total / classes;

    printf("Your GPA is: %.2f\n", gpa);

    return 0;
}