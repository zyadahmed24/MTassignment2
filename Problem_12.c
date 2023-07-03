#include<stdio.h>

int timeNeed(int num)
{
    if(num>=0 && num<30)
        return 7;
    else if(num>=30 && num<60)
        return 5;
    else if(num>=60 && num<90)
        return 3;
    else if(num>=90 && num<100)
        return 1;
    else
        return 0;
}

void main(void)
{
    int num;
    printf("Enter the Temperature:\n");
    scanf("%d",&num);

    printf("your need is:%d",timeNeed(num));
}