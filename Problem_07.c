#include<stdio.h>

void checkDivision(int num1, int num2)
{
    if(num2%num1 == 0)
    {
        printf("Yes they are multiple.\n");
    }
    else
    {
        printf("No they are not multiple.\n");
    }
}

void main(void)
{
    int num1,num2;
    printf("Enter the numbers:\n");
    scanf("%d%d",&num1,&num2);

    checkDivision(num1,num2);
}