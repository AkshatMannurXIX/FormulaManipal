#include <stdio.h>
#include <stdlib.h>

int findsecond(int *arr, int sz)
{
    int f=0,s=0,i;
    for(i=0;i<sz;i++)
    {
        if(*(arr+i)>f)
        {
            s=f;
            f=*(arr+i);
        }
        else if(*(arr+i)>s && *(arr+i)!=f)
        {
            s=*(arr+i);
        }
    }
    return s;
}
void main()
{
    int arr[]={1,7,4,6,2,5};
    int sz= sizeof(arr)/sizeof(arr[0]);
    int sl=findsecond(arr,sz);
    if(sl!=0)
    {
        printf("The second largest element is %d\n",sl);
    }
}
