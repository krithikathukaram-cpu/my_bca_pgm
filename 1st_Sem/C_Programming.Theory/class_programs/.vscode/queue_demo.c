#include <stdio.h> 
#include <stdlib.h> 

int myqueue[5]; // Array to store queue data 
int size = 5; 
int front = -1; // Represents queue 'front' 
int rear = -1;  // Represents queue 'rear' 

// Method to check overflow
int isFull() { 
    if (rear == size - 1) { 
        printf("Queue is Full..Cannot store further data\n"); 
        return 1; 
    } 
    return 0; 
} 

// Method to check underflow 
int isEmpty() { 
    if (front == -1 || front > rear) { 
        return 1; 
    } 
    return 0; 
} 

// Method definition for enqueue 
void enqueue(int newdata) { 
    if (isFull()) { 
        return; // Overflow handled inside isFull()
    } else { 
        if (front == -1) front = 0; // Initialize front on first insertion
        rear++; 
        myqueue[rear] = newdata; 
        printf("Data enqueued successfully!\n"); 
    } 
    printf("\n");
} 

// Method definition for dequeue 
void dequeue() { 
    if (isEmpty()) { 
        printf("Queue Underflow! Queue is empty\n\n"); 
    } else { 
        int retrievedData = myqueue[front]; 
        printf("Retrieved Data: %d\n\n", retrievedData); 
        front++; 
        
        // Reset queue to empty state if all items are processed
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    } 
} 

// Method definition for display 
void display_queue() { 
    if (isEmpty()) { 
        printf("Queue is empty\n\n"); 
    } else { 
        printf("Queue elements: "); 
        // Queues print from Front to Rear
        for (int i = front; i <= rear; i++) { 
            printf("%d ", myqueue[i]); 
        } 
        printf("\n\n"); 
    } 
} 

int main() { 
    int option, mydata; 
    do { 
        printf("1.Enqueue Data\n"); 
        printf("2.Dequeue Data\n"); 
        printf("3.Display Queue\n"); 
        printf("4.Exit\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &option); 
        
        switch(option) { 
            case 1: 
                printf("Enter enqueue data: "); 
                scanf("%d", &mydata); 
                enqueue(mydata); 
                break; 
            case 2: 
                dequeue(); 
                break; 
            case 3: 
                display_queue(); 
                break; 
            case 4: 
                exit(0); 
            default:
                printf("Invalid choice!\n\n");
        } 
    } while (option != 4); 
    
    return 0; 
}
