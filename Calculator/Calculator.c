#include <stdio.h>

int main()
{
    float num1;
    float num2;
    int op;
    float result;
    float addition(float, float);
    float substraction(float, float);
    float multiplication(float, float);
    float division(float, float);
    printf("Please enter 2 numbers separated by a space.\n");
    scanf("%f %f", &num1, &num2);
    printf("Now please enter an operator (1 -> +,2 -> -,3 -> *,4 -> /)\n");
    scanf("%i", &op);
    switch(op)
    {
    case 1:
        result = addition(num1, num2);
        printf("%.2f", result);
        break;
    case 2:
        result = substraction(num1, num2);
        printf("%.2f", result);
        break;
    case 3:
        result = multiplication(num1, num2);
        printf("%.2f", result);
        break;
    case 4:
        result = division(num1, num2);
        printf("%.2f", result);
        break;
    }
}
float addition(float num1, float num2)
{
    float Sum = num1 + num2;
    return Sum;
}
float substraction(float num1, float num2)
{
    float Difference = num1 - num2;
    return Difference;
}
float multiplication(float num1, float num2)
{
    float Product = num1 * num2;
    return Product;
}
float division(float num1, float num2)

{
    float Divide = num1 + num2;
    return Divide;
}
