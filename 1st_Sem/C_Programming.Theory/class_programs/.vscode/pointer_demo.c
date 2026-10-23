#include<stdio.h>
int mian(){
    int x=10;            //integer variable x stores 10
    int*p;               //'*' is pointer
    p=&x;                //'&' it refers variable
    printf("%d",x);   
    printf("%p",&x);   
    printf("%p",p);
    return 0;   
}