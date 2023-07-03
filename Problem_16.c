#include<stdio.h>

long numOnes(unsigned char num)
{
    long i=0;
    while(num!=0)
    {
        if(num%10 == 1)
        {
            i++;
        }
        num/=10;
    }
    return i;
}

void main(void)
{
    unsigned char num;
    printf("Enter the number:\n");
    scanf("%d",&num);

    printf("The result is:%d",numOnes(num));
}