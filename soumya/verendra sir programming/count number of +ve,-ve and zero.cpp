//count number of +ve,-ve and zero

#include<stdio.h>

int main()
{
	int n,i,positiveCount = 0,negativeCount = 0,zeroCount = 0;
	
	printf("Enter the number of n :\n");
	scanf("%d",&n);
	
	printf("Enter %d valuse:\n",n);
	for(i=1;i<=n;i++)
	{
		int num;
		scanf("%d",&num);
		
		if(num > 0)
		{
			positiveCount++;
		}
		else if(num < 0)
		{
			negativeCount++;
		}
		else
		{
			zeroCount++;
		}
	}
	printf("The number of positive values: %d\n",positiveCount);
	printf("The number of negetive valuse: %d\n",negativeCount);
	printf("The number of zero values: %d\n",zeroCount);
}