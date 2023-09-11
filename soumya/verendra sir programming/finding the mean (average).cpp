//find the mean(average)

#include<stdio.h>

int main()
{
	int n,i,sum=0,avg;
	
	printf("Enter the number of n:\n");
	scanf("%d",&n);
	
	printf("Enter %d value:\n",n);
	for(i=1;i<=n;i++)
	{
		sum = sum + i;
		avg = n / sum;
		scanf("%d",&avg);
	}
	printf("the mean is :%d\n ",avg);
	
	return 0;
}