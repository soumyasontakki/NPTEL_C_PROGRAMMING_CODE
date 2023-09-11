//interchange between two numbers

#include<stdio.h>

int main()
{
	int C,D;
	
	printf("Enter the two numbers:\n");
	scanf("%d%d",&C,&D);
	
	printf("before swapping :\n C = %d \n D = %d ",C,D);
	
	C = C + D;
	D = C - D;
	C = C - D;
	
	printf("\n After swapping:\n C = %d \n D = %d ",C,D);
	
	return 0;
}