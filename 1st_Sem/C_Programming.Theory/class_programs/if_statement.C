#include<stdio.h>
int main(){
    int choice,firstnumber,secondnumber;
    printf("-----------Welcome to my calculator-----------\n");
    printf("1.Addition\n");
    printf("2.Subtraction");                                                                                           
    printf("3.Multiplication");
    printf("4.Division"); 
    printf("Enter your choice:");
    scanf("%d",&secondnumber);
    if(secondnumber==1){
        //addition
        printf("Enter the first number:");
        scanf("%d",&firstnumber);
        printf("Enter the secondnumber:");
        scanf("%d",&secondnumber);
        int sum=firstnumber+secondnumber;
        printf("The sum is:%d",sum);
    }
    if(choice==2){
        //subtraction
        printf("Enter the first number:");
        scanf("%d",&firstnumber);
        printf("Enter the secondnumber:");
        scanf("%d",&secondnumber);
        int difference=firstnumber-secondnumber;
        printf("The differnce is:%d",difference);
    }
    if(choice==3){
        //multiplication
        printf("Enter the first number:");
        scanf("%d",&firstnumber);
        printf("Enter the secondnumber:");
        scanf("%d",&secondnumber);
        int multipilcation=firstnumber*secondnumber;
        printf("The product is:%d",multipilcation);
    }
    if(choice==4){
        //division
        printf("Enter the first number:");
        scanf("%d",&firstnumber);
        printf("Enter the secondnumber:");
        scanf("%d",&secondnumber);
        int division=firstnumber/secondnumber;
        printf("The sum is:%d",division);
    }
return 0;
}
        
