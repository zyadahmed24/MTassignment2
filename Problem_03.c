#include <stdio.h>

char check(int);

void main(void)
{
    int num;
    printf("Enter the character:\n");
    scanf("%d",&num);

    switch (check(num))
    {
    case 1:
        printf("It's a positive number");
        break;
    case 0:
        printf("It's a negative number");
        break;

    default:
        break;
    }
}

char check(int x)
{
    if (x>=0)
        return 1;
    else
        return 0;
}