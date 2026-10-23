#include <stdio.h>

int main()
{
    int roll, m1, m2, m3, m4, m5;
    int total;
    float average, percentage;

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5; 
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    printf("\nRoll Number = %d", roll);
    printf("\nTotal Marks = %d", total);
    printf("\nAverage = %.2f", average);
    printf("\nPercentage = %.2f%%", percentage);

    return 0;
}