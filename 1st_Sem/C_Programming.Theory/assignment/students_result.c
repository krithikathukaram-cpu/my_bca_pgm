#include <stdio.h>

#define STUDENTS 5
#define SUBJECTS 5

void inputDetails(int roll[], char name[][50], int marks[][SUBJECTS]);
int calculateTotal(int marks[]);
float calculateAverage(int total);
float calculatePercentage(int total);
int checkResult(int marks[]);
void displayResult(int roll[], char name[][50], int marks[][SUBJECTS]);

void inputDetails(int roll[], char name[][50], int marks[][SUBJECTS])
{
    int i, j;  

    for (i = 0; i < STUDENTS; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %49[^\n]", name[i]);

        for (j = 0; j < SUBJECTS; j++)
        {
            printf("Enter marks in Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
}

int calculateTotal(int marks[])
{
    int j, total = 0;

    for (j = 0; j < SUBJECTS; j++)
    {
        total = total + marks[j];
    }

    return total;
}

float calculateAverage(int total)
{
    return total / 5.0;
}

float calculatePercentage(int total)
{
    return (total / 500.0) * 100;
}

int checkResult(int marks[])
{
    int j;

    for (j = 0; j < SUBJECTS; j++)
    {
        if (marks[j] < 35)
        {
            return 0;
        }
    }

    return 1;
}

void displayResult(int roll[], char name[][50], int marks[][SUBJECTS])
{
    int i, total, result;
    float average, percentage;

    printf("\n---------------- STUDENT RESULT SHEET ----------------\n");
    printf("Roll  Name       S1  S2  S3  S4  S5  Total  Average  Percentage  Result\n");

    for (i = 0; i < STUDENTS; i++)
    {
        total = calculateTotal(marks[i]);
        average = calculateAverage(total);
        percentage = calculatePercentage(total);
        result = checkResult(marks[i]);

        printf("%-5d %-10s", roll[i], name[i]);

        for (int j = 0; j < SUBJECTS; j++)
        {
            printf("%4d", marks[i][j]);
        }

        printf("%7d %8.2f %10.2f%%  %s\n",
               total, average, percentage,
               result == 1 ? "PASS" : "FAIL");
    }
}

int main()
{
    int roll[STUDENTS];
    char name[STUDENTS][50];
    int marks[STUDENTS][SUBJECTS];

    inputDetails(roll, name, marks);
    displayResult(roll, name, marks);

    return 0;
}