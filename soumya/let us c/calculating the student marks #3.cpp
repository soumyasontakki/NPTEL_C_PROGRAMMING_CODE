//calculating the student marks

#include<stdio.h>

int main()
{
	int n,sum=0,i;
	
	printf("Enter the number of n subject:\n");
	scanf("%d",&n);
	printf("Enter the marks of %d subject:\n");
	for(i=1;i<n;i++)
	{
	  scanf("%d",&n);
    }
	for(i=1;i<n;i++)
	{
	 sum = sum + i;
	 printf("%d  ",sum);
    }
	
	
}