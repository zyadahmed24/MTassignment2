#include<stdio.h>

char lowerTOupper(char letter)
{
    if(letter>=97 && letter<=97+26)
    {
        return letter - (97 -65);
    }
    else
    {
        printf("error data\n");
        return 0;
    }
}

void main(void)
{
    char letter;
    printf("Enter a letter:\n");
    scanf("%c",&letter);

    printf("Here we go:%c",lowerTOupper(letter));
}