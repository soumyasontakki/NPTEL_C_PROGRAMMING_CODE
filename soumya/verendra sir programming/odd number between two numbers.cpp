//odd number between two numbers

#include<stdio.h>

int main()
{
	int n=1, m;
	
	printf("Enter range m to get odd till the number:\n");
	scanf("%d",&m);
	
	while(n<=m)
	{
	
		printf("%4d",n);
			n=n+2;

	}
	return 0;
}
