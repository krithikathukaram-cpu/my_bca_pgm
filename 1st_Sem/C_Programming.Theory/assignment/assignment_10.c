#include <stdio.h>

long long factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int arraySum(int a[], int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return a[n - 1] + arraySum(a, n - 1); 
    }
}

int main()
{
    int a[100], n, num, i, sum;

    printf("Enter a number for factorial: ");
    scanf("%d", &num);

    if(num < 0 || num > 20)
    {
        printf("Enter a number from 0 to 20\n");
        return 0;
    }

    printf("Factorial of %d = %lld\n",
           num, factorial(num));

    printf("Enter number of array elements: ");
    scanf("%d", &n);

    if(n < 0 || n > 100)
    {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    sum = arraySum(a, n);

    printf("Sum of array elements = %d\n", sum);

    return 0;
}