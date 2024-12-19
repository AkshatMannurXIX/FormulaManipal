#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[50],i,j,k,n;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  printf("Enter the elements of the array\n");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(a[i]==a[j])
          {
              for(k=j;k<n;k++)
              {
                  a[k]=a[k+1];
              }
              j--;
              n--;
          }
      }
  }
  printf("The new array is\n");
  for(i=0;i<n;i++)
  {
      printf("%d",a[i]);
  }
}
