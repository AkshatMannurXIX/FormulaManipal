#include <stdio.h>
#include <stdlib.h>

int fibo(int n)
{
    if(n<=0)
    {
        return 0;
    }
    else if(n=1)
    {
        return 1;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
int main()
{
    int n;
    printf("Enter the term number");
    scanf("%d",&n);
    printf("Fibonacci term is %d\n",n,fibo(n));
    return 0;
}
