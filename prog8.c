#include <stdio.h>
#include <stdlib.h>

void main()
{
   int arr[]={1,2,3,4,5,6},sz,i,t;
   sz=sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<sz-1;i=i+2)
   {
     t=*(arr+i);
     *(arr+i)=*(arr+i+1);
     *(arr+i+1)=t;
   }
   printf("New array\n");
   for(i=0;i<sz;i++)
   {
       printf("%d",arr[i]);
   }
}
