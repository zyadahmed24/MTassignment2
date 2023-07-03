#include<stdio.h>

char oddOReven(int num)
{
    if(num%2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void main(void)
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);

    oddOReven(num) ? printf("Odd") : printf("Even");
}