#include <stdio.h>  // For input and output
#include <stdlib.h> // For malloc() and free()

int main() // Main function
{
    int *arr; // Pointer to store array address
    int i, sum = 0; // Declare variables

    arr = (int *)malloc(10 * sizeof(int)); // Allocate memory for 10 integers

    if (arr == NULL) // Check memory allocation
    {
        printf("Memory allocation failed"); // Display error
        return 1; // Exit the program
    }

    for (i = 0; i < 10; i++) // Loop for 10 integers
    {
        printf("Enter number %d: ", i + 1); // Ask for input
        scanf("%d", &arr[i]); // Read integer
    }

    for (i = 0; i < 10; i++) // Loop through array
    {
        sum = sum + arr[i]; // Calculate sum
    }

    printf("Sum = %d\n", sum); // Display sum

    free(arr); // Deallocate allocated memory

    return 0; 
}


















