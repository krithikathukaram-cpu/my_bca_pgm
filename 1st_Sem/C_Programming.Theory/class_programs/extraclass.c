//c pgm to perform arithmatic operations of two integer
#include<stdio.h>    //header file defind to perform input and output operation

int main(){
    int sum;
    float difference;
    int firstnumber;   //declaraed a variable 'firstnumber' of 'integer' type.
    int secondnumber;
    firstnumber=100;   //value 100 is stored in 'firstnumber'
    secondnumber=200;  //variable initialization
    sum=firstnumber+secondnumber;  //addition
    printf("the sum is %d",&sum);

    float first,second;
    printf("Enter the first number");
    scanf("%f",&first);     //read a float type data from keyboard and stores it in 'first'

    printf("Enter the second number");
    sccanf("%f",&second);   //read a float type data from keyboard and stores it in 'second'

    difference=firstnumber-secondnumber;
    printf("the difference is %f",&difference);

}