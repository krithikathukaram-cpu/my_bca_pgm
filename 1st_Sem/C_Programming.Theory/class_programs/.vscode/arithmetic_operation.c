#include<stdio.h>
int main(){
    int x=10;
    int *p=&x;

    printf("%d", *p);  //10
    *p=50;
    printf("%d", x); //50
    return 0;
}