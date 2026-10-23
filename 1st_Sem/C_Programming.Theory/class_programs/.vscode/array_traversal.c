#include <stdio.h>

//reads array SIZE from KB
int read_array_size()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    return size;
}

int validate_array_size(int array_size)
{
    if(array_size > 4)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void initialize_array(int myarray[], int arraySize)
{
    int i;

    for(i=0; i<arraySize; i++)
    {
        printf("Enter %d array element: ",i+1);
        scanf("%d",&myarray[i]);
    }
}

int get_array_sum(int myarray[], int arraySize)
{
    int i;
    int sum=0;

    for(i=0; i<arraySize; i++)
    {
        sum=sum+myarray[i];
    }

    return sum;
}

void print_result(int myarray[], int arraySize, int sum)
{
    int i;

    printf("\nArray Element:\n");

    for(i=0; i<arraySize; i++)
    {
        printf("%d ",myarray[i]);
    }

    printf("\nThe sum of array elements: %d",sum);
}

int main()
{
    int isVaild=0;
    int arraySize;

    while(isVaild==0)
    {
        arraySize=read_array_size();
        isVaild=validate_array_size(arraySize);

        if(isVaild==1)
        {
            break;
        }

        printf("Array size is not valid: please re-try again\n");
    }

    int myarray[arraySize];
    int sum;

    initialize_array(myarray,arraySize);
    sum=get_array_sum(myarray,arraySize);
    print_result(myarray,arraySize,sum);

    return 0;
}