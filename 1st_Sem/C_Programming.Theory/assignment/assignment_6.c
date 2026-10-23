#include <stdio.h>

int main()
{
    int a[100], n, key, i;
    int found = 0, comparisons = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 1 || n > 100)
    {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        comparisons++;

        if(a[i] == key)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found\n");
    }

    printf("Number of comparisons = %d\n", comparisons);

    return 0;
}