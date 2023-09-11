//calculating eligible vote or not

#include<stdio.h>

main()
{
	int x;
	
	printf("enter the value of x:");
	scanf("%d",&x);
	
	if(x>=18)
	{
	    printf("eligible for vote");
	}
	else
	{
		printf("not eligible for vote");
	}
}