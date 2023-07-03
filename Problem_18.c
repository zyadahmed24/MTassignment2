#include<stdio.h>

int ispower(int num)
{
    if(num == 1)
        return 1;

    int hold=num;
    for(int i=2; i<num/2 ;i++)
    {
        while(hold != 1)
        {
            if(hold % i == 0)
            {
                hold /= i;
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

    ispower(L) ? printf("yes"):printf("no");
}

