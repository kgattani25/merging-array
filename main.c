#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i,j,n,m,b[20],c[20],a[20],swap,size;
   printf("enter size of array a");
   scanf("%d",&n);
    printf("enter size of array b");
   scanf("%d",&m);
    printf("enter the elements of array a");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
    printf("enter the elements of array b");
   for(i=0;i<m;i++)
   {
      scanf("%d",&b[i]);
   }
   size=n+m;
    for(i=0;i<n;i++)
   {
       c[i]=a[i];

   }
    for(i=n;i<size;i++)
   {
       c[i]=b[i-n];
   }
   printf("merge array \n");
   for(i=0;i<size;i++)
   {
       printf(" %d",c[i]);
   }
   printf("sorted array \n");
       printf("sorted array is\n");
   for(j=0;j<size-1;j++)
   {
       for(i=0;i<size-1;i++)
       {
           if(c[i]>c[i+1])
           {
               swap=c[i];
               c[i]=c[i+1];
               c[i+1]=swap;
                    }
       }
   }
   for(i=0;i<size;i++)
   {
       printf("%d",c[i]);
   }
printf("desc order array \n");
for(i=size-1;i>=0;i--)
{
    printf("%d",c[i]);
}
    return 0;
}
