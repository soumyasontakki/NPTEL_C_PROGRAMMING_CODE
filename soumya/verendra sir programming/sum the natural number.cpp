//sum of all natural number

#include<stdio.h>

int main()
{
	int n,sum=0,i=1;
	
	printf("enter the value of n :\n");
	scanf("%d",&n);
	
	while(n>=i)
	{
		sum = sum + i;
		i = i + 1;
	}
	printf(" %d \n",sum);
	return 0;
}