#include<stdio.h>

int rollno,eng_marks,maths_marks,python_marks,c_marks,hindi_marks;            
float average,sum,CGPA; //global declaration

void getStudentData(rollnumber, marks){   //functiion defination 
    printf("Enter the rollnumber");
    scanf("%d",&rollno);
}
int getTotal(){
    sum=rollno,eng_marks+maths_marks+python_marks+c_marks+hindi_marks;
    return sum;   //return 'sum' to main()
}
float getAverage(){
    average=sum/5;
    return average;   //return 'average' to main()
}
float getCGPA(){
    CGPA=average*5;
    return CGPA;
}
void displayStudentDetails(){
    printf("rollno:%d",rollno);
    return rollno;  //return 'rollno' to main
}
int main(){
    //delcaration
    //user defined
    
    getStudentData();          //collect student data
    int total=getTotal();      //calculation total of 5 subject marks
    float average=getAverage();             //calculate average mark
    float CGPA=getCGPA();                 //to get CGPA
    displayStudentDetails();   //to display student details

    printf("total %d",&total);
    printf("average %f",&average);
    printf("CGPA %f",&CGPA);
}