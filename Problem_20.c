#include<stdio.h>

short countOnes(short num)
{
    short count=0,max=0;
    while(num != 0)
    {
        if(num%2 == 1)
        {
            count++;
            count > max ? max=count : max == max;
        }
        else
        {
            count=0;
        }
        num/=2;
    }
    return max;
}

int main(void)
{
    short num;
    printf("Enter the number:\n");
    scanf("%d",&num);

    printf("the result:%d",countOnes(num));
    return 0;
}