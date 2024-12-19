#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[]="formulamanipal",p[100];
    int i,y;
    for(i=0;i<3;i++)
    {
        printf("Enter your password\n");
        gets(p);
        y=strcmp(x,p);
        if(y==0)
        {
            printf("Logged In!\n");
            break;
        }
        else
        {
            printf("Try Again\n");
        }

    }
    return 0;
}

