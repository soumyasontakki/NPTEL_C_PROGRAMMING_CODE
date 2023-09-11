/*

#include<stdio.h>

int main()
{
	int n,a[0],i=1;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	
	*/
#include<stdio.h>

int main()
{
	int n,a[20],i=1;
	
	printf("enter the value of n:\n");
	scanf("%d",&n);
	printf("enter %d values\n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d    ",a[i]);
	}
	
}