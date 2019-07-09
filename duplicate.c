#include<stdio.h>
void main()
{
   int a[30];
   int i,j,n,c;
   printf("\nEnter no of elements :");
   scanf("%d",&n);

   printf("\nEnter the values :");
   for (i = 0; i<n;i++)
    {
      scanf("%d",&a[i]);
   }
   for (i =0;i<n; i++)
   {
       for(j=0;j<n;j++)
       {
           if(a[i]==a[j])
           {
               c++;
               break;
           }
           }
       }
       printf("The duplicated arrays are :");
        for (i = 0; i < n; i++)
      printf("\n%d",a[i]);
   }
