//printing the number between two number

#include<stdio.h>

int main()
{
	int n,m;
	
	printf("Enter the numbers of n, m:\n");
	scanf("%d%d",&n,&m);
	
	while(n<=m)
	{
		printf("%d  ",n);
		n++;
	} 
	  return 0;
}