#include <stdio.h>

int main()
{
    int choice;
    float a, b, result;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    switch(choice)
    {
        case 1:
            result = a + b;
            printf("Addition = %.2f", result);
            break;

        case 2:
            result = a - b;
            printf("Subtraction = %.2f", result);
            break;

        case 3:
            result = a * b;
            printf("Multiplication = %.2f", result);
            break;

        case 4:
            result = a / b;
            printf("Division = %.2f", result);
            break;

        case 5:
            printf("Modulus = %d", (int)a % (int)b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}