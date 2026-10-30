#include<stdio.h>

//Structure definition
struct student
{
    //Structure members
    int id;    /*4bytes*/
    char name[10];       //name              /*10bytes*/
    char contact[10];    //for contact_no   /*10bytes*/
    int pin;             //for PIN code    /*4bytes*/
}; 

int main()
{
    //creating structure variable 'firstStudent' of type 'student'
    struct student firstStudent;     //a student 'firstStudent' of type 'student'
    struct student secondStudent;     //28 bytes are allocated
    struct student thirdStudent;     //same 28 bytes are allocated    
    firstStudent.id=100;    //member 'id' is initialized with 100
    firstStudent.name[10]=20;  
    secondStudent.id=100;    //member 'id' is initialized with 100
    secondStudent.name[10]=50;  
    thirdStudent.id=100;     //member 'id' is initialized with 100
    thirdStudent.name[10]=60;
};