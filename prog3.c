#include <stdio.h>
#include <stdlib.h>

void main()
{
    int tu,cost=0;
    printf("Enter the number of units consumed\n");
    scanf("%d",&tu);
    if(tu<=100)
    {
        cost=tu*5;
    }
    else if(tu>100 && tu<=300)
    {
        cost=500+((tu-100)*8);
    }
    else
    {
        cost=2100+((tu-300)*10);
    }
    printf("Your total bill is %d\n",cost);
}
