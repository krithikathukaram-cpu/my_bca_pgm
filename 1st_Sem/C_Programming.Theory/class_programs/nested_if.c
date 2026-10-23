//c pgm to demo nested if else
// pgm to issue DL(driving )
#include<stdio.h>   //includes 'stdio.h' to this pgm
int main(){         //execution strts from here
    int age;
    int isIndian;   //1-indian; 0-non-indian
    int isTestCleared;  //1-cleared; 0-not cleared
    int paidFee;
    printf("--------welcome to DL---------");
    printf("Enter the Age");
    scanf("%d",&age);
    printf("Enter Nationality ");
    scanf("%d",&isIndian);
    printf("Wheather istest cleared");
    scanf("%d",&isTestCleared);
    printf("Enter the ispaidFee");
    scanf("%d",&paidFee);

    printf("Age : %d", age);
    printf("Nationality : %d", isIndian);
    printf("Wheather istest cleared : %d", isTestCleared);
    printf("Paidfee :%d", paidFee);


//core logic to determine certificate can be issued or not 
//nested if statement
if(isIndian==1){
    if(age>=18){
        if(isTestCleared == 1){
            if(paidFee == 500){
                printf("DL can be issued");
            }else{
               printf("fees is not paid");
            }
        }else{
            printf("test is not cleared");
        }
    }else{
        printf("age is not equal to 18");
    }
}else{
    printf("not indian");
}
    return 0;
}                                                                                                                                                                                                                       