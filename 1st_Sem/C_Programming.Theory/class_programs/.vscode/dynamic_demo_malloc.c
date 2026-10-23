#include<stdlib.h>
int main(){
    int x=5;
    int *p;
    p=&x;
    p=(int*)malloc(5 *sizeof(int));
    printf("%d",p[2]);
    return 0;
}