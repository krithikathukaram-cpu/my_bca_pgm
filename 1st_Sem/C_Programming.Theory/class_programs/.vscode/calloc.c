#include<stdlib.h>
#include<stdio.h>

int main()
{
    int *p;
    p=(int*)calloc(1,sizeof(int));

    printf("Value=%d", *p);

    free(p);
    return 0;
}