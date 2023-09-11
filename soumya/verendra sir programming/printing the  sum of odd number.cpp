//print sum of odd numbers

#include<stdio.h>

int main()
{
	int n, sum=0,i=1;
	
	printf("enter the value of n: \n");
	scanf("%d",&n);
	
	while(i<=n)
	{
	    sum = sum + i;
	    i = i + 2;
	}
		printf("sum of even number upto %d = %d\n",n,sum);
}