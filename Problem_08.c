#include<stdio.h>

void getPrime(int num1, int num2)
{
    int i=0,j=2,fact=1;
    for(i=num1;i<=num2;i++)
    {
        if(i==0 || i==1)
        {
            continue;
        }
        while(j<=i/2)
        {
            if(i%j == 0)
            {
                fact = 0;
                break;
            }
            j++;
        }
        if(fact)
            printf("%d ",i);
        j=2;
        fact = 1;
    }
}

void main(void)
{
    int num1,num2;
    printf("Enter the numbers:\n");
    scanf("%d%d",&num1,&num2);

    getPrime(num1,num2);
}