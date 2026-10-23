  #include <stdio.h>

int main()
{
    int a = 20, b = 10;
    float x = 10.5, y = 2.5;
    double p = 20.5, q = 5.5;
    char c1 = 20, c2 = 10;

    printf("Arithmetic Operations on Different Data Types\n\n");

    printf("Integer Operations:\n");
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulus = %d\n\n", a % b);

    printf("Float Operations:\n");
    printf("Addition = %.2f\n", x + y);
    printf("Subtraction = %.2f\n", x - y);
    printf("Multiplication = %.2f\n", x * y);
    printf("Division = %.2f\n\n", x / y);

    printf("Double Operations:\n");
    printf("Addition = %.2lf\n", p + q);
    printf("Subtraction = %.2lf\n", p - q);
    printf("Multiplication = %.2lf\n", p * q);
    printf("Division = %.2lf\n\n", p / q);

    printf("Character Operations:\n");
    printf("Addition = %d\n", c1 + c2);
    printf("Subtraction = %d\n", c1 - c2);
    printf("Multiplication = %d\n", c1 * c2);
    printf("Division = %d\n", c1 / c2);
    printf("Modulus = %d\n", c1 % c2);

    return 0;
}