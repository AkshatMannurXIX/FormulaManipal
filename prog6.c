#include <stdio.h>
#include <stdlib.h>
void main()
{
    char str[100];
    int v=0,c=0,len,i;
    printf("Enter a string:\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    printf("Number of vowels: %d\n",v);
    printf("Number of consonants: %d\n",c);
}
