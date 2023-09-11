//printing the reverse order

#include<stdio.h>

int main()
{
	int n,a[20],i=0;
	
	printf("enter the value of n:\n");
	scanf("%d",&n);
	printf("enter %d values \n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("entered values in rev:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}