#include<stdio.h>
#include<string.h>
void main()
{
	int sum=0,count=0,k;
	char str[50];
  printf("Enter the string");
  gets(str);
	a=strlen(str);
	for(int i=0;i<=k;i++)
	{
		if((str[i]==' ')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='10'))
		{
		    sum++;
		}
		else
		{
		  count++;
		}
	}
	printf("The no of  special character in the line is %d\n",count);
}
