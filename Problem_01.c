#include <stdio.h>

void ecube(int);

void main(void)
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);

    ecube(num);
}

void ecube(int num)
{
    printf("%d", num * num * num);
}