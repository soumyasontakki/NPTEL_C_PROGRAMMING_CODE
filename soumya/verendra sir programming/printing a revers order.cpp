//printing the revers order 

#include<stdio.h>

int main()
{
	int n,i,a[20],x,y;
	
	printf("Enter the number of n:\n");
	scanf("%d",&n);
	
	printf("Enter the %d values");
	for(i=0;i<n;i++)
	
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		printf("%d  \n",a[i]);
	}
	for(i=n-1;i<=n;i++)
	{
		x = x+y;
		y = x-y;
		x = x-y;
	}
	for(i=n-1;i<=n;i++)
	{
		printf("%d \n",a[i]);
	}
	return 0;

}