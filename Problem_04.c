#include <stdio.h>  /*mal3on*/

float calculator(float, float, char);

void main(void)
{
    float num1, num2, result = 0;
    char oper;
    printf("Enter the operation then the two numbers:\n");
    scanf("%c%f%f",  &oper, &num1, &num2);

    result = calculator(num1,num2,oper);

    printf("The result is:%f", result);
}

float calculator(float num1, float num2, char oper)
{
    switch (oper)
    {
    case '+':
        return num1 + num2;
        break;
    case '-':
        return num1 - num2;
        break;
    case '*':
        return num1 * num2;
        break;
    case '/':
        return num1 / num2;
        break;
    default:
        printf("Error\n");
        return 0;
        break;
    }
}
