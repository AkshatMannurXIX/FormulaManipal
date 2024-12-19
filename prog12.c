#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,i,j,k,m;
    printf("Enter the number of rows for the pyramid");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            printf("*");
        }
        printf("\n");

    }
}
