//input 5 students records
//name,3 submarks,total,percentage

#include <stdio.h>
#include <stdlib.h>

struct students_records {
    int roll_no;
    int marks[3];
    int total;
    float average;
    float percentage;
    char student_name[50];
    int student_id;
};

// Pass the array pointer and the size (n) to all processing functions
void initialize_students(struct students_records *students, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Enter Roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter name: ");
        scanf("%s", students[i].student_name);
        
        students[i].total = 0;
        for (int j = 0; j < 3; j++) {
            printf("Enter Subject %d Marks: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }
    }
}
void get_total(struct students_records *students, int n) {
    for (int i = 0; i < n; i++) {
        students[i].total = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
    }
}

void get_avg(struct students_records *students, int n) {
    for (int i = 0; i < n; i++) {
        students[i].average = students[i].total / 3.0f;
    }
}

void get_percentage(struct students_records *students, int n) {
    for (int i = 0; i < n; i++) {
        students[i].percentage = ((float)students[i].total / 300.0f) * 100.0f;
    }
}
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of students!\n");
        return 1;
    }

    // Allocate dynamic array based on user input
    struct students_records *students = malloc(n * sizeof(struct students_records));
    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
     // Execute functions passing the pointer and array size
    initialize_students(students, n);
    get_total(students, n);
    get_avg(students, n);
    get_percentage(students, n);

    // Tabular formatting headers and dividers
    printf("\n========================================================================================\n");
    printf("%-10s %-20s %-7s %-7s %-7s %-7s %-10s %-10s\n", 
           "Roll No", "Name", "Sub 1", "Sub 2", "Sub 3", "Total", "Average", "Percentage");
    printf("----------------------------------------------------------------------------------------\n");

    // Print each student record as a row in the table
    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-7d %-7d %-7d %-7d %-10.2f %-10.2f%%\n", 
               students[i].roll_no, 
               students[i].student_name, 
               students[i].marks[0], 
               students[i].marks[1], 
               students[i].marks[2], 
                students[i].total, 
               students[i].average, 
               students[i].percentage);
    }
    printf("========================================================================================\n");

    free(students);
    return 0;
}