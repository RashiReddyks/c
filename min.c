#include<stdio.h>
void main()
{
    int a[15]={1,2,4,5,6,7,8,12,34,56,7,8,8,9,76};
    int i;
    int min;
    min=a[0];
    for(i=0;i<=14;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        }
        printf("%d\n",min);
    }

