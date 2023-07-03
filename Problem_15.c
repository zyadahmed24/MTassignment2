#include<stdio.h>

long numOnes(unsigned long num)
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
    unsigned long num;
    printf("Enter the number:\n");
    scanf("%ld",&num);

    printf("The result is:%ld",numOnes(num));
}