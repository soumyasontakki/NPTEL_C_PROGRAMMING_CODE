//sum of all even numbers 1 to N

#include<stdio.h>

int main()
{
	int n,sum=0;
	
	printf("enter n number");
	scanf("%d \n",&n);
	
	if(n%2==0)
	{
		sum=n*(n+1) /2;
	}
	else
	{
		sum=(n-1)*n /2;
    }
    
	printf("the sum of all even numbers 1 to %d\n",n,sum);
	
	return 0;
	
}