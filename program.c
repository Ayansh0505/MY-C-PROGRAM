
#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    int total;
    float percentage;

    printf("Enter marks of 3 subjects:\n");

    printf("Subject 1: ");
    scanf("%d", &marks1);

    printf("Subject 2: ");
    scanf("%d", &marks2);

    printf("Subject 3: ");
    scanf("%d", &marks3);

    total = marks1 + marks2 + marks3;
    percentage = total / 3.0;

    printf("\n----- Result -----\n");
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 40)
        printf("Result: Pass");
    else
        printf("Result: Fail");

    return 0;
}
