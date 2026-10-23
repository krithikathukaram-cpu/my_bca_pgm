#include <stdio.h>
int main(){

int factorial(int number){
     if (number == 0){        /* base case */
        return 1;             //recursive step 
    return number * factorial(number-1);
    }

}
   
int main(void){
    int n = 3;
    printf("Enter the number:");
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}
{
    int n = 4;
    printf("Enter the number:");
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}

{
    int n = 5;
    printf("Enter the number:");
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}
}