#include <stdio.h>
#define MAX 100

int main()
{
    int a[MAX], n, i, choice, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 0 || n > MAX)
    {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 1 || choice == 2)
        {
            printf("Array before operation: ");
            for(i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
        }

        switch(choice)
        {
            case 1:
                if(n == MAX)
                {
                    printf("Array is full\n");
                    break;
                }

                printf("Enter index to insert: ");
                scanf("%d", &pos);

                if(pos < 0 || pos > n)
                {
                    printf("Invalid index\n");
                    break;
                }

                printf("Enter element to insert: ");
                scanf("%d", &value);

                for(i = n; i > pos; i--)
                {
                    a[i] = a[i - 1];
                }

                a[pos] = value;
                n++;

                printf("Array after insertion: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Enter index to delete: ");
                scanf("%d", &pos);

                if(pos < 0 || pos >= n)
                {
                    printf("Invalid index\n");
                    break;
                }

                for(i = pos; i < n - 1; i++)
                {
                    a[i] = a[i + 1];
                }

                n--;

                printf("Array after deletion: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Program ended\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 3);

    return 0;
}