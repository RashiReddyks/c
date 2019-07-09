#include<stdio.h>
void main()
{
    int a[15];
    int  n,i,sum=0;
    printf("enter size of elements:");
    scanf("%d",&n);

    printf("enter  elements:\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum is %d\n",sum);
    }
