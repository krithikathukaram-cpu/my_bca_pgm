//prgm to store and display 5 sujects mark
#include<stdio.h>
int main(){
    int my_marks[5];                     //inetger array of size '5'
    int sub_marks[5];   //declare an array 'sub_marks'
    //with size 5 of 'inetger' type
    //storing data/Array initialization - array_name[index]=data/value;
    sub_marks[0]=80;  //stores '80' in an array position whose index is '0'
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88;  //static array initialization
    //Fetch first array elements from 'sub_marks'
    printf("First Suject mark :%d\n",sub_marks[0]);
    printf("Second Suject mark :%d\n",sub_marks[1]);
    printf("Third Suject mark :%d\n",sub_marks[2]);
    printf("Fourth Suject mark :%d\n",sub_marks[3]);
    printf("Fift Suject mark :%d\n", sub_marks[4]);
    //dynamic initialization of 'my_marks'

    for(int i=0;i<5;i++){
        printf("Enter %d Subject Mark:[int data]",i+1);
        scanf("%d",&my_marks[i]);       
    }

    printf("My Sub1 Mark: %d\n",my_marks[0]);
    printf("My Sub2 Mark: %d\n",my_marks[1]);
    printf("My Sub3 Mark: %d\n",my_marks[2]);
    printf("My Sub4 Mark: %d\n",my_marks[3]);
    printf("My Sub5 Mark: %d\n",my_marks[4]);
}






