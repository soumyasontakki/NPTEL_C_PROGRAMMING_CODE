//finding the largest of three number

#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("enter the number a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		printf("print a");
	}
	else if(b>c)
	{
		printf("print b");
	}
	else
	{
		printf("print c");
	}
}