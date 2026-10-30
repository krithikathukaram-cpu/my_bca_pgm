#include <stdio.h>
#include <stdlib.h> 

// Declared in global way to finish this program
int size = 5;
int stack[5]; 
int top = -1; 

// Method definition for push
void push(int newdata, int size) {   
     
    if (top == size - 1) {
        printf("Stack Overflow! Cannot push %d\n", newdata);
    } else {
        top++;
        stack[top] = newdata;
        printf("%d pushed into stack\n", newdata);
    }
}
// Method definition for pop
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Stack is empty\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

// Method definition for display
void display_stack() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int main() {
    int option, mydata;

    do
    {
        printf("Stack Size: %d\n", size);
        printf("Enter your choice (1:Push, 2:Pop, 3:Display, 4:Exit): ");
        scanf("%d", &option);
        
        switch(option) {
            case 1:
                printf("Enter stack data: ");
                scanf("%d", &mydata);
                push(mydata, size);
                break;
            case 2:
                pop();
                break;
            case 3:
                display_stack();
                break;
            case 4:
                exit(0); 
        }
    } while (option <= 4 && option >= 1); 
    
    return 0;
}
