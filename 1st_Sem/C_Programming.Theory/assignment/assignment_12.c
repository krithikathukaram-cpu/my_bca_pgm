#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 5
#define NUM_SUBJECTS 3

// Structure definition
struct Student {
    int rollno;
    char name[30]; // Fixed: Explicitly declared as a character array of size 30
    int marks[NUM_SUBJECTS];
    int total;
    float average;
};

// Function prototypes
int findTotal(struct Student s);
float findAverage(int total);
void displayAll(struct Student s[], int n);

int main() {
    struct Student students[NUM_STUDENTS];
    int i, j;

    printf("--- Enter Details for %d Students ---\n", NUM_STUDENTS);

    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        printf("Enter Roll No: ");
        scanf("%d", &students[i].rollno);
        
        // Clear newline character from buffer before reading string
        getchar(); 
        
        printf("Enter Name: ");
        // Read string including spaces safely
        fgets(students[i].name, sizeof(students[i].name), stdin);
        // Remove trailing newline character added by fgets
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        // Read and validate marks for 3 subjects
        for (j = 0; j < NUM_SUBJECTS; j++) {
            do {
                printf("Enter Marks for Subject %d (0-100): ", j + 1);
                scanf("%d", &students[i].marks[j]);
                
                if (students[i].marks[j] < 0 || students[i].marks[j] > 100) {
                    printf("Invalid input! Marks must be between 0 and 100. Try again.\n");
                }
            } while (students[i].marks[j] < 0 || students[i].marks[j] > 100);
        }

        // Calculate total and average using functions
        students[i].total = findTotal(students[i]);
        students[i].average = findAverage(students[i].total);
    }

    // Display all records in tabular format
    displayAll(students, NUM_STUDENTS);

    return 0;
}

// Function to calculate and return total marks
int findTotal(struct Student s) {
    int sum = 0;
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        sum += s.marks[i];
    }
    return sum;
}

// Function to calculate and return average marks
float findAverage(int total) {
    return (float)total / NUM_SUBJECTS;
}

// Function to display all student records in a table
void displayAll(struct Student s[], int n) {
    printf("\n%-10s %-20s %-5s %-5s %-5s %-7s %-7s\n", 
           "Roll No", "Name", "M1", "M2", "M3", "Total", "Average");
    printf("--------------------------------------------------------------------\n");
    
    for (int i = 0; i < n; i++) {
        // Fixed: Added correct array indices, [1], [2] to display individual marks
        printf("%-10d %-20s %-5d %-5d %-5d %-7d %-7.2f\n", 
               s[i].rollno, 
               s[i].name, 
               s[i].marks[0], 
               s[i].marks[1],  
               s[i].marks[2], 
               s[i].total, 
               s[i].average);
    }
}
