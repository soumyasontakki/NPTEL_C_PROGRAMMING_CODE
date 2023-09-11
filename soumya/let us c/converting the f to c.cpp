//To convert the fahrenheit degree to centigrade degree

#include<stdio.h>

int main()
{
	int F,C;
	
	printf("Enter the fahrenheit degree :\n");
	scanf("%d",&F);
	
	C = (5.0/9.0)*(F-32);
	
	printf("centigrade degree is :%d \n",C);
	
	return 0;
}