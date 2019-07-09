#include<stdio.h>
void main()
{
    int a[10],i,j,siz,t;
     printf("enter the size of array:");
     scanf("%d",&siz);
     for(i=0;i<=siz;i++)
     {
         scanf("%d",&a[i]);
     }
     j=i-1;
     i=0;
     while(i<j)
     {
     t=a[i];
     a[i]=a[j];
     a[j]=t;
     i++;
     j++;
     }
     printf("reverse of an array is:");
     for(i=0;i<siz;i++)
     {
         printf("%d\n",a[i]);
     }
     }
