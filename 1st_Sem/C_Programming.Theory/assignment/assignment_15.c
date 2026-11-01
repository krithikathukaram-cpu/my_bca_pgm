#include <stdio.h>

// Function declarations
void bubbleSort(int arr[], int n);
void printArray(int arr[], int n);

int main() {
    int arr[10];
    int n = 10;

    // Reading 10 integers from the user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Printing the array before sorting
    printf("\n--- Original Array ---\n");
    printArray(arr, n);
    printf("\n-----------------------\n");

    // Sorting the array
    bubbleSort(arr, n);

    // Printing the final sorted array
    printf("\n--- Final Sorted Array ---\n");
    printArray(arr, n);
    printf("---------------------------\n");

    return 0;
}

// Function to perform Bubble Sort and print details after each pass
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int totalSwaps = 0;
    int swapped;

    // Loop for passes
    for (i = 0; i < n - 1; i++) {
        swapped = 0; // Reset swap tracker for the current pass

        // Loop for inner comparisons
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;      // Mark that a swap occurred
                totalSwaps++;     // Increment total swap counter
            }
        }

        // Print the state of the array after the current pass
        printf("After Pass %d: ", i + 1);
        printArray(arr, n);

        // Optimization check: If no elements were swapped, the array is already sorted
        if (swapped == 0) {
            printf("(Optimization: Stopped early because no swaps occurred during this pass)\n");
            break;
        }
    }

    // Printing total swaps performed during the whole execution
    printf("\nTotal number of swaps: %d\n", totalSwaps);
}

// Function to print the array elements
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
