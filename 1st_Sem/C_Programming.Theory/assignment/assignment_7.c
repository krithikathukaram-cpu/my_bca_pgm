#include <stdio.h>

int main()
{
    int a[100], n, key, i;
    int low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 1 || n > 100)
    {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter %d elements in ascending order:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 1; i < n; i++)
    {
        if(a[i] < a[i - 1])
        {
            printf("Array is not sorted\n");
            return 0;
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
        else if(key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}