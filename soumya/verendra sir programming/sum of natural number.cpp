//sum of natural number

#include<stdio.h>

int main()
{
	int n,i,sum=0;
	
	printf("Enter the number of n:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum of natural number %d",sum);
	
	return 0;
}