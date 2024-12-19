#include <stdio.h>
#include <stdlib.h>

void bubble(int a[],int sz)
{
    int i,j,t;
    for(i=0;i<sz-1;i++)
    {
        for(j=0;j<sz-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
void selection(int a[],int sz)
{
    int i,j,p,t;
    for(i=0;i<sz-1;i++)
    {
        p=i;
        for(j=i+1;j<sz;j++)
        {
            if(a[j]<a[p])
            {
                p=j;
            }
            else if(p!=j)
            {
                t=a[i];
                a[i]=a[p];
                a[p]=t;
            }
        }

    }
}
void search(int a[],int sz,int e)
{
    int f,l,m;
    f=0;
    l=sz-1;
    while(f<=l)
    {
      m=(f+l)/2;
      if(a[m]==e)
      {
          printf("Element found");
          break;
      }
      else if(a[m]<e)
      {
          f=m+1;
      }
      else
      {
          l=m-1;
      }
    }
}
void main()
{
    int a[50],n,i,e,c;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Make a choice\n");
    printf("1 - Bubble Sort\n");
    printf("2 - Selection Sort\n");
    scanf("%d",&c);
    if(c==1)
    {
        bubble(a,n);
    }
    else if(c==2)
    {
        selection(a,n);
    }
    else
    {
        printf("Wrong choice\n");
    }
    printf("Your sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Enter element you want to search\n");
    scanf("%d",&e);

    search(a,n,e);
}
