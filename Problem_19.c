#include<stdio.h>

int ispower3(int num)
{
    if(num == 3)
        return 1;

    int hold=num;
    for(int i=2; i<num/2 ;i++)
    {
        while(hold != 1)
        {
            if(hold % 3 == 0)
            {
                hold /= 3;
            }
            else
                break;

            if(hold == 1)
            {
                return 1;
            }
        }
        hold = num;
    }
    return 0;
}

void main(void)
{
    int L;
    printf("Enter the number:\n");
    scanf("%d",&L);

    ispower3(L) ? printf("yes"):printf("no");
}

