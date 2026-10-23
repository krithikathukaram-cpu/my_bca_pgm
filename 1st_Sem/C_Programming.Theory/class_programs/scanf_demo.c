#include <stdio.h>
int main(){
    int firstnumber;
    int secondnumber;   
    int modulus;
    printf("Enter first number:");
    scanf("%d",&firstnumber);
    printf("Enter second number");
    scanf("%d",&secondnumber);
    modulus = firstnumber % secondnumber;
    printf("The modulus of %d and %d is %d",firstnumber,secondnumber,modulus);
    return 0;
}
