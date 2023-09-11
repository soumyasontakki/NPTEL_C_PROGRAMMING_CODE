//all natural numbers between any two numbers

#include<stdio.h>

int main()
{
	int i,start,end;
	
	printf("enter the starting number :\n");
	scanf("%d",&start);
	
	printf("enter the ending number:\n");
	scanf("%d",&end);
	
	printf("all natural number between %d and %d are\n",start,end);
	
	for( int i=start;i<=end;i++)
	{
		printf("%d \n",i);
	}
	
	return 0;
}