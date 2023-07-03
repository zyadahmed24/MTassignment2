#include<stdio.h>

void detTwo(int num)
{
    while(num!=0)
    {
        if((num%2 != 0) && (num != 1))
        {
            printf("It's not\n");
            return;
        }
        num/=2;
    }
    printf("It's a power of two");
    return;
}

void main(void)
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);

    detTwo(num);
}