#include <stdio.h>

char check(char);

void main(void)
{
    char character;
    printf("Enter the character:\n");
    scanf("%c",&character);

    switch (check(character))
    {
    case 1:
        printf("It's an alphabet");
        break;
    case 0:
        printf("It's not an alphabet");
        break;

    default:
        break;
    }
}

char check(char x)
{
    if ((x > 65 && x < 65 + 26) || (x > 97 && x < 97 + 26))
        return 1;
    else
        return 0;
}