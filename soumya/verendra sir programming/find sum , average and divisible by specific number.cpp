//sum and average of a given number and divisible specific number

#include<stdio.h>

int main()
{
	int n,a[30],i,sum=0,count,divisor;
	
	printf("enter the number n:\n");
	scanf("%d",&n);
	printf("enter %d values \n",n);
	
	for(i=1;i<=n;i++)
	  scanf("%d",&a[i]);
	  
	printf("enter a divisor :\n");
	scanf("%d",divisor);
	
	for(i=1;i<n;i++)
	  if(a[i] % divisor == 0)
	  sum=sum+a[i];
	  count++;
	  
	  float avg = sum / count;
	  
	  printf("sum of the number is divisible by %d =%d :\n",sum,divisor);
	  printf("average is divisible by %d = %f \n",divisor);
	  	
}