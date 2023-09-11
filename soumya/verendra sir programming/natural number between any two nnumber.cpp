//natural number between any two number

#include<stdio.h>

int main()
{
	int i=1,first_num,last_num ;
	
	printf("Enter the first number:\n ");
	scanf("%d",&first_num);
	
	printf("Enter the last number:\n");
	scanf("%d",&last_num);
	
	for(i=1;i<=first_num;i++)
	{
		printf("%d  \n",i);
	}
	for(i=1;i<=last_num;i++)
	{
		printf("%d  \n",i);
	}
	return 0;
}