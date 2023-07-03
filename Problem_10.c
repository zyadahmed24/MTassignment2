#include<stdio.h>

int holo(int num)
{
    int numHol=0;
    while(num!=0)
    {
        switch (num%10)
        {
        case 1:
        case 2:
        case 3:
        case 5:
        case 7:
            numHol+=0;
            break;
        case 0:
        case 4:
        case 6:
        case 9:
            numHol++;
            break;
        case 8:
            numHol+=2;
            break;
        }
        num/=10;
    }
    return numHol;
}

void main(void)
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);

    printf("The number of holes is:%d",holo(num));
}