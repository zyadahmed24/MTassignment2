#include<stdio.h>

void xorList(int L,int R);


void main(void)
{
    int L,R;
    printf("Enter the interval:\n");
    scanf("%d%d",&L,&R);

    xorList(L, R);
}


void xorList(int L,int R)
{
    int max = 0;
    for(int i=L;i<=R;i++)
    {
        for(int j=i;j<=R;j++)
        {
            (i^j)>max ? max = (i^j) : max == max;
        }
    }

    for(int i=L;i<=R;i++)
    {
        for(int j=i;j<=R;j++)
        {
            (i^j) == max ? printf("(%d ^ %d) = %d\n",i,j,max) : max == max;
        }
    }
}