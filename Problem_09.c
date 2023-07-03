#include<stdio.h>

void swap(int *num1, int *num2)
{
    int temp=0;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void main(void)
{
    int num1,num2;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&num1,&num2);

    swap(&num1,&num2);

    printf("num1 became:%d\nnum2 became:%d",num1,num2);
}