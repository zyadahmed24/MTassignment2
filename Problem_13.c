#include<stdio.h>

int flor(float num1, float num2)
{
    return num1 + num2;
}

void main(void)
{
    float num1,num2;
    printf("Enter your numbers:\n");
    scanf("%f%f",&num1,&num2);

    printf("your result is:%d",flor(num1,num2));
}