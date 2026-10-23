#include <stdio.h>
int main(){
    int c, dbms, python, total;
    float percentage;

    printf("Enter C marks: ");
    scanf("%d", &c);

    printf("Enter DBMS marks: ");
    scanf("%d", &dbms);

    printf("Enter Python marks: ");
    scanf("%d", &python);

    total = c + dbms + python;
    percentage = (total / 150.0) * 100;

    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);

    if (percentage < 35)
        printf("\nResult: Fail");
    else if (percentage >= 70 && percentage <= 80)
        printf("\nResult: Distinction");
    else if (percentage >= 60 && percentage < 70)
        printf("\nResult: First Class");
    else
        printf("\nResult: Second Class");

    return 0;
}