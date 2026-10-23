#include<stdio.h>
//get_Array_sum() definition
//int number[]=mynumber
int get_array_sum(int mynumber[]){
    int i;
    int sum=0;
    for(i=0; i<5; i++)
    {
       sum=sum+mynumber[i];
    }
    return sum;
}

int main(){
 
    int mynumber[5];
    //array initialization
    for(int i=0;i<5;i++){
       printf("Enter the %d number:",i+1);
       scanf("%d",&mynumber[i]);
    }
    //calculate the sum add returns sum
    int total=get_array_sum(mynumber);

    printf("The sum of array element is %d",total);
    return 0;
} 