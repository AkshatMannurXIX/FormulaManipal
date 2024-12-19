#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,c,d,i,s;
    printf("Enter three numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=a+b+c;
    printf("The sum of the following numbers is %d\n",d);
    if(d%2==0)
    {
      printf("The sum is even\n");
    }
    else
    {
      printf("The sum is odd\n");
    }
    for(i=2;i<=d/2;++i)
     {
        if(d%i==0)
            s=1;
     }
     if(s==1)
     {
        printf("The sum is not prime\n");
     }
     else if(d==0 || d==1)
     {
        printf("The sum is neither prime nor composite\n");
     }
     else
     {
         printf("The sum is composite\n");
     }
}
