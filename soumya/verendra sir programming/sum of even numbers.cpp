//sum of all even numbers

#include<stdio.h>

int main()
{
	int n,sum=0,i=2;
	
	printf("enter the number of n: \n");
	scanf("%d",&n);
	
	while(i<=n)
	{
	  sum=sum+i;
	  i=i+2;
	}
	printf("sum of even nos upto %d = %d \n",n,sum);
	return 0;
}