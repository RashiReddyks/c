#include<stdio.h>
void main()
{
    int a[15]={1,2,4,5,6,7,8,12,34,56,7,8,8,9,90};
    int i;
    int max;
    max=a[0];
    for(i=0;i<=14;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        }
        printf("%d\n",max);
    }

