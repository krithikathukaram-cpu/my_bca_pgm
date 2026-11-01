#include <stdio.h>
#include <stdlib.h>

#define MAX 5

// Global variables for the queue
int queue[MAX];
int front = -1;
int rear = -1;

// Function declarations
int isFull();
int isEmpty();
void enqueue(int item);
void dequeue();
void display();

int main() {
    int choice, item;

    while (1) {
        // Displaying the menu
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        // Handle invalid inputs that aren't integers
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear the input buffer
            continue;
        }

        switch (choice) {
            case 1:
                if (isFull()) {
                    printf("Queue Overflow\n");
                } else {
                    printf("Enter the item to insert: ");
                    scanf("%d", &item);
                    enqueue(item);
                }
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program. Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice! Please choose an option between 1 and 4.\n");
        }
    }
    return 0;
}

// Check if the queue is full
int isFull() {
    return (rear == MAX - 1);
}

// Check if the queue is empty
int isEmpty() {
    return (front == -1 || front > rear);
}

// Insert an element at the rear end
void enqueue(int item) {
    if (isFull()) {
        printf("Queue Overflow\n");
        return;
    }
    
    // If inserting the first element
    if (front == -1) {
        front = 0;
    }
    
    rear++;
    queue[rear] = item;
    printf("%d successfully enqueued.\n", item);
}

// Remove and print the front element
void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return;
    }
    
    printf("Dequeued element: %d\n", queue[front]);
    front++;
    
    // Reset queue pointers if the queue becomes entirely empty
    if (front > rear) {
        front = -1;
        rear = -1;
    }
}

// Display elements from front to rear
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
