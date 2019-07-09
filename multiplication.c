#include<stdio.h>
void main()
{
int n,i;
printf("Enter an integer:\n");
scanf("%d",&n);
for(i=1;i<=15;++i)
{
printf("%d *%d=%d\n",n,i,n*i);
}
}
