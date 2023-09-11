//printing a factors

#include<stdio.h>
#include<math.h>
int main()
{
	int n, i;
	long int fact=1;
	
	printf("Enter the number of n:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	  fact=fact * i;
     }
      printf("the factors of %d is %ld\n",n,fact);
      return 0;
}