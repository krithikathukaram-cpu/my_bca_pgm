#include<stdio.h>

void add_to_number(int first,int second){   //functiion defination
    int sum;
    // first=100;
    // second=200;
    sum=first+second;
    printf("The sum is %d",sum);
}


int main(){
add_to_number(10,20);
add_to_number(100,200);
printf(" pgm terminated");
}