#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m[4][4],s=0,spd=0,ssd=0,i,j;
  {
     printf("Enter values in the matrix\n");
     for(i=0;i<4;i++)
     {
         for(j=0;j<4;j++)
         {
             scanf("%d",&m[i][j]);
             s=s+m[i][j];
             if(i==j)
             {
                 spd=spd+m[i][j];
             }
             else if(i+j==3)
             {
                 ssd=ssd+m[i][j];
             }
         }
     }
     printf("Your matrix is\n");
     for(i=0;i<4;i++)
     {
         for(j=0;j<4;j++)
         {
             printf("%d",m[i][j]);
         }
         printf("\n");
     }
     printf("The sum of all elements is %d\n",s);
     printf("The sum of all primary diagonal elements is %d\n",spd);
     printf("The sum of all secondary diagonal elements is %d\n",ssd);
     return 0;
  }
}
