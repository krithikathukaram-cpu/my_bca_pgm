#include <stdio.h>

int main(){
    int choice;
    int num1,num2;

    // Displaying the menu
    printf("1. Smallest of 3 number\n");
    printf("2. Largest of 3 number\n");
    printf("3. Check a number for ODD/Even\n");
    printf("4.check for divisible by 5\n");
    printf("5.swap 2 numbers\n");
    printf("enter your choice:\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            // 1. Smallest of 3 numbers
            printf("enter first number:");
            scanf("%d", &num1);
            printf("enter second number:");
            scanf("%d", &num2);

            if (num1 <= num2){
                printf("smallest number is:%d\n", num1);
            } else if (num2 <= num1) {
                printf("smallest number is:%d\n", num2);
            }           
            break;

        case 2:
            // 2. Largest of 3 numbers
            printf("enter first number:");
            scanf("%d", &num1);
            printf("enter second number:");
            scanf("%d", &num2);

            if (num1 >= num2){
                printf("largest number is:%d\n", num1);
            } 
               else{
                 printf("largest number is:%d\n", num2);
            }
            break;

            // Swapping using a multiplication variable
            num1=num1 + num2;

            printf("After swapping:\nFirst number = %d\nSecond number = %d\n", num1, num2);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}