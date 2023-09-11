//simple interest

#include<stdio.h>

int main()
{
	int p,t;
	float r,si;
	
	p=1000;
	t=3;
	r=8.5;
	
	//formula for simple interest
	si=p*t*r/100;
	
	printf("%f",si);
	
	return 0;
}