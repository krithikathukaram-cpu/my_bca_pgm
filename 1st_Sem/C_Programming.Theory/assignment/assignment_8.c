#include <stdio.h>

void readArray(int a[], int n)
{
    int i;

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void displayArray(int a[], int n)
{
    int i;

    printf("Array elements with index:\n");
    for(i = 0; i < n; i++)
    {
        printf("Index %d = %d\n", i, a[i]);
    }
}

int findSum(int a[], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    return sum;
}

int main()
{
    int a[100], n, sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 1 || n > 100)
    {
        printf("Invalid array size\n");
        return 0;
    }

    readArray(a, n);
    displayArray(a, n);

    sum = findSum(a, n);

    printf("Sum of array elements = %d\n", sum);

    return 0;
}