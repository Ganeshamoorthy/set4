#include<stdio.h>
void main()
{
int g,b,n,i,m;
printf("enter the number:");
scanf("%d",&n);
g=0;
b=1;
m=0;
for(i=0;i<n;i++)
{
printf("%d\n",m);
g=b;
b=m;
m=g+b;
}
}
