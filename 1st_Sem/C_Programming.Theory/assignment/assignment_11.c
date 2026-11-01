#include <stdio.h>

// Function to rotate values using pointers and one temporary variable
void swap3(int *x, int *y, int *z) {
    int temp = *z; 
    *z = *y;       
    *y = *x;       
    *x = temp;     
}

int main() {
    int a, b, c;

    // Prompt user for input
    printf("Enter three integers (a b c): ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    // Display values before the rotation
    printf("Before: a=%d b=%d c=%d\n", a, b, c);

    // Pass the memory addresses of a, b, and c
    swap3(&a, &b, &c);

    // Display values after the rotation
    printf("After:  a=%d b=%d c=%d\n", a, b, c);

    return 0;
}
