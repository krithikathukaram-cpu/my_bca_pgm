#include <stdio.h>
#include <stdlib.h>

#define MAX 5

// Global stack variables
int stack[MAX];
int top = -1;

// Function prototypes
int isFull();
int isEmpty();
void push(int item);
void pop();
void display();

int main() {
    int choice, item;

    while (1) {
        // Display Menu
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        // Handle non-integer inputs gracefully
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        } 

        switch (choice) {
            case 1:
                if (isFull()) {
                    printf("Stack Overflow\n");
                } else {
                    printf("Enter the element to push: ");
                    scanf("%d", &item);
                    push(item);
                }
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice! Please select an option between 1 and 4.\n");
        }
    }
    return 0;
}

// Returns 1 if stack is full, otherwise 0
int isFull() {
    if (top == MAX - 1) {
        return 1;
    }
    return 0;
}

// Returns 1 if stack is empty, otherwise 0
int isEmpty() {
    if (top == -1) {
        return 1;
    }
    return 0;
}

// Inserts an element into the stack
void push(int item) {
    // Note: isFull check is managed inside main switch statement as per menu logic,
    // but added here as an extra safety measure.
    if (isFull()) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = item;
    printf("%d pushed onto the stack.\n", item);
}

// Removes and prints the top element
void pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return;
    }
    int popped_item = stack[top];
    top--;
    printf("Popped element: %d\n", popped_item);
}

// Prints the stack elements from top to bottom
void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements (Top to Bottom):\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}
