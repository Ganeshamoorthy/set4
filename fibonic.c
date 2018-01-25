#include <stdio.h>
int main()
{
	int g=0,i,n,nextterm,b=1;
	printf("enter the number");
	scanf("%d",&n);
	printf(" fibonacci series");
	for(i=1;i<=n;++i)
	{
	printf("%d",g);
	nextterm=g+b;
	g=b;
	 b=nextterm;
	}
