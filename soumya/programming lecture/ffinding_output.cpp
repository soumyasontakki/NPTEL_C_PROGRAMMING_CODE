#include<stdio.h>

int main()
{
	int x=1,y=3;
	int t=x;
	x = y;
	y = t;
	
	printf("%d%d",x,y);
	
	return 0;
}
