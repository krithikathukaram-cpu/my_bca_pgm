#include<stdlib.h>
#include<stdio.h>

int main()
{
    int *p;
    p=(int*)malloc(5 *sizeof(int));

    *p=10;

    printf("Value=%d", *p);

    free(p);
    return 0;
}