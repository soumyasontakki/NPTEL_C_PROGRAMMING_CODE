//printing a multiplication table 

#include<stdio.h>

int main()
{
	int n ,i=1,product,num;
	
	printf("Enter the number of n:\n");
	scanf("%d",&n);
	
	printf("print multiplication table :\n");
	
	for(i=1;i<=10;i++)
	  for(num=1;num<=n;num++)
	{
		product = n * i;
		printf("%d \n",product);
	}
	
/*	for(num=1;num<=n;num++)
	{
		
		printf("%d \n",);
	}*/
			
	return 0;
}