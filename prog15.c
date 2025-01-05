#include <stdio.h>
#include <stdlib.h>

void Compress(char *str, int i, int count, char *res, int *ni)
{
    if (str[i] == '\0')
    {
        if (count > 0)
            *ni += sprintf(res + *ni, "%d", count);
        return;
    }

    if (str[i] == str[i + 1])
    {
        Compress(str, i + 1, count + 1, res, ni);
    } else
    {
        res[(*ni)++] = str[i];
        if (count > 1)
        {
            *ni += sprintf(res + *ni, "%d", count);
        }
        Compress(str, i + 1, 1, res, ni);
    }
}

int main()
{
    char str[100], res[200];
    int ni = 0;

    printf("Enter your string ");
    scanf("%s", str);

    Compress(str, 0, 1, res, &ni);
    res[ni] = '\0';

    printf("New String %s\n", res);

    return 0;
}
