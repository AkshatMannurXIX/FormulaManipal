#include <stdio.h>
#include <stdlib.h>

void main()
{
    int h=0,m=0,s1=0,s;
    printf("Enter the number of seconds you wish to convert\n");
    scanf("%d",&s);
    h=s/3600;
    printf("It is %d hours\n",h);
    m=(s-(h*3600))/60;
    printf("It is %d minutes\n",m);
    s1=s-(3600*h)-(60*m);
    printf("It is %d seconds\n",s1);
}
