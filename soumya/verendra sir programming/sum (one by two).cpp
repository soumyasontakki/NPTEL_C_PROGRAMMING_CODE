//find sum =1+1/2+1/3....

#include<stdio.h>

int main()
{
	int n,i;
	float sum = 0.0;
	
	printf("Enter the number of n:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum = sum + (0.1/i);
	}
	printf("sum of the number is %.2f \n",sum);
	
	return 0;
}