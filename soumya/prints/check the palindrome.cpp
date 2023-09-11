//reverse given number and check for palindrome

#include<stdio.h>

int main()
{
	int i=0,n,a[20];
	
	printf("Enter the number n:\n");
	scanf("%d",&n);
	printf("enter %d values \n",n);
	
    for(i=0;i<n;i++)
	{
		scanf("%d  ",&a[i]);
	}
	 
	printf("entered value in rev\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d  ",a[i]);
	}
	
	
	
}