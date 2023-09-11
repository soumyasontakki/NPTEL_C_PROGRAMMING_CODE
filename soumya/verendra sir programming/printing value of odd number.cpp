//printing odd numbers

#include<stdio.h>

int main()
{
	int n,i=1,sum=0;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum=sum=i;
		i=i+2;
		printf("%d\n",sum);
	}
	return 0;
}
