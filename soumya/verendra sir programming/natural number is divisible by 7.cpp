//print all natural numbers divisible by 7

#include<stdio.h>

int main()
{
	int n,i=0;
	
	printf("enter the number of n:\n");
	scanf("%d",&n);
	
	printf("natural numbers divisible by 7 up to  %d:\n",n);
	
	for(i=1;i<=n;i++)
	    if (i % 7==0)
	    	printf("%d  \n",i);
	return 0;
}