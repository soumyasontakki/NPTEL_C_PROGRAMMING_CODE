//calculating the student marks

#include<stdio.h>

int main()
{
	int sub,sum=0,i;
	
	printf("enter the total sub marks:\n");
	scanf("%d",sub);
	printf("enter %d values:\n");
	for(i=1;i<sub;i++)
	 scanf("%d",&sub);
	 
	for(i=1;i<sub;i++)
	 sum = sum + i;
	 printf("%d  ",sum);
	   
	
	
}