//check the number is positive,negative or odd

#include<stdio.h>

main()
{
	int n;
	
	printf("enter the number n:");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("the number is positive");
	}
	else if(n<0)
	{	
		printf("the number is negative");
	}
	else
	{	
		printf("the number is zero");
	}
}