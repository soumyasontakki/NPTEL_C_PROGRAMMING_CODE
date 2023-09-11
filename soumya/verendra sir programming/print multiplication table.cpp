//print multiplication table

#include<stdio.h>

int main()
{
	int n;
	
	printf("enter the number n: \n");
	scanf("%d",&n);
	
	int count=1;
	
	while(count<=10)
	{
	  int product =n * count;
	  printf("%d*%d=%d  \n",n,count,product);
	  count=count+1;
    }
	return 0;
}