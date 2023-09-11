//find the sum of digits of a number

#include<stdio.h>
int main()
{
	int num,n,sum=0;
	
	scanf("%d",&n);
	while(n!=0)
	{
	sum=sum+(n % 10);
	n = n /10;
    }
    printf("the sum of digits of the number%d is %d\n",sum,num);
    
}
